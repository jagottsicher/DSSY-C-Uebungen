/*
 * Übungsaufgabe 
 * Aufgabe: Schreibe einen einfachen Taschenrechner
 * 
*/

// benutzt printf/sscanf

#include <stdio.h>

int main () {
  float x,y,z;
  char operand[2];
  char line[BUFFERSIZE];
  
  if ( fgets(line, BUFFSIZ,stdin) && sscanf(line,"%f%1s%f", &x,operand,&y) == 3 ) {
    switch ( operand[0] ) {
      case '+': z = x + y;
      break;
      case '-': z = x - y;
      break;
      case '*': z = x * y;
      break;
      case '/': z = x / y; // Achtung: division durch 0 muss abgefangen werden!
      break;
      default: fputs("Fehlerhafter oder unbekannter Operator!\n"; 
      return 1;
     }
   printf("%f %s %f = %f\n",x,operand,y,z);
  } else {
    fputs("Fehlerhafte Eingabe!\n", stderr);
    return 0;
  } 
}
