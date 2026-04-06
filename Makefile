# Einstellungen (Settings)
CC = gcc
CFLAGS = -std=c23 -g -Wall
TARGET = define.exe

all:
	$(CC) $(CFLAGS) define.c -o $(TARGET)