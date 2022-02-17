/*
 * Übungsaufgabe
 * Aufgabe: Schreibe einen einfachen Taschenrechner
 *
*/

// benutzt printf/sscanf

#define BUFFERSIZE 255

#include <stdio.h>

int main () {

  float x,y,ergebnis;

  char operand[2];
  char line[BUFFERSIZE];

  printf("Aufgabe eingeben. <ENTER> für Berechnung => ");

  if ( fgets(line, BUFFERSIZE,stdin) && sscanf(line,"%f%1s%f", &x,operand,&y) == 3 ) {
    switch ( operand[0] ) {
      case '+': ergebnis = x + y;
      break;
      case '-': ergebnis = x - y;
      break;
      case '*': ergebnis = x * y;
      break;
      case '/': ergebnis = x / y; // Achtung: division durch 0 muss abgefangen werden!
      break;
      default: fputs("Fehlerhafter oder unbekannter Operator!\n", stdout);
      return 1;
     }
   printf("%f %s %f = %f\n",x,operand,y,ergebnis);
  } else {
    fputs("Fehlerhafte Eingabe!\n", stderr);
    return 0;
  }
}
