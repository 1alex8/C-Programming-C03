#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// 1. Bit-Felder: Maximale Speichereffizienz auf Bit-Ebene
typedef struct {
    uint8_t version     : 4; // Nutzt exakt 4 Bits (Werte 0-15)
    uint8_t priority    : 3; // Nutzt exakt 3 Bits (Werte 0-7)
    uint8_t is_valid    : 1; // Nutzt exakt 1 Bit (True/False)
} PacketFlags; // Insgesamt: Genau 1 Byte Speicherbedarf!

// 2. Anonyme Union (C11): Verschiedene Sichten auf denselben Speicher
typedef union {
    uint32_t raw_address;
    struct {
        uint8_t a, b, c, d; // Erlaubt direkten Zugriff wie bei IPv4 (z.B. 192.168.1.1)
    } ipv4;
} IPAddress;

// Vorwärtsdeklaration für den Funktionszeiger im Struct
typedef struct NetworkPacket NetworkPacket;

// 3. Das Master-Struct
struct NetworkPacket {
    PacketFlags flags;
    IPAddress source;
    IPAddress destination;
    size_t payload_size;

    // 4. Funktionszeiger: Objektorientierung in C (Methoden simulieren)
    void (*print_info)(const NetworkPacket* self);

    // 5. Flexible Array Member (FAM): Muss zwingend das letzte Element sein!
    char payload[]; 
};

// --- Implementierung der "Methode" ---
void print_packet_info(const NetworkPacket* self) {
    printf("=== Smart Packet Info ===\n");
    printf("Status  -> Version: %d, Prio: %d, Valid: %s\n", 
           self->flags.version, self->flags.priority, self->flags.is_valid ? "Ja" : "Nein");
           
    printf("Source  -> %d.%d.%d.%d (Raw: %u)\n", 
           self->source.ipv4.a, self->source.ipv4.b, 
           self->source.ipv4.c, self->source.ipv4.d,
           self->source.raw_address);
           
    printf("Payload -> (%zu Bytes): '%s'\n", self->payload_size, self->payload);
    printf("=========================\n\n");
}

// --- Factory-Funktion (Konstruktor) ---
NetworkPacket* create_packet(uint8_t a, uint8_t b, uint8_t c, uint8_t d, const char* message) {
    size_t msg_len = strlen(message) + 1; // +1 für den Null-Terminator (\0)

    // MAGIE HIER: Wir allokieren Platz für das Struct PLUS die Länge unserer Nachricht.
    // Das Flexible Array Member 'payload' nutzt diesen extra Speicherplatz am Ende.
    NetworkPacket* packet = malloc(sizeof(NetworkPacket) + msg_len);
    if (!packet) return NULL;

    // Werte setzen
    packet->flags.version = 4;
    packet->flags.priority = 7;
    packet->flags.is_valid = 1;

    packet->source.ipv4.a = a;
    packet->source.ipv4.b = b;
    packet->source.ipv4.c = c;
    packet->source.ipv4.d = d;

    packet->payload_size = msg_len;

    // Methode an das "Objekt" binden
    packet->print_info = print_packet_info;

    // Payload direkt in den angehängten Speicherbereich kopieren
    strcpy(packet->payload, message);

    return packet;
}

int main() {
    // 1. Objekt instanziieren
    NetworkPacket* my_packet = create_packet(192, 168, 178, 20, "Hallo aus dem C-Struct!");

    // 2. Objekt-Methode aufrufen (wie in Python oder C++)
    my_packet->print_info(my_packet);

    // 3. Speicher sauber freigeben (Ein einziger free()-Aufruf reicht!)
    free(my_packet);
    
    return 0;
}