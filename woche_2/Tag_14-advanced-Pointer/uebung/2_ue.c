#include<stdio.h>

int (*ArrPtrFunc[])(char *);

// wofür:
/*
Ein Array vn Funktionszeigern kann man beispielsweise zum Aufbau eines Menüs verwenden. Die Nummern der Menübefehle könnte man als Index 
zu den Funktionszeigern im Array verwenden. So würde beispielsweise nach der Auswahl der fünften Option im Menü
die Funktion aufgerufen, auf die  das fünfte Element im Array verweist.
*/

