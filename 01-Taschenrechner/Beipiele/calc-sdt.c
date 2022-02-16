/*
 * Übungsaufgabe 
 * Aufgabe: Schreibe einen einfachen Taschenrechner
 * 
*/

// benutzt printf/scanf
#include <stdio.h>

// Startpunkt der Anwendung
int main(int argc, char** argv)
{
  // Erzeuge Variablen für die Ein- und Ausgabe
  int ersteZahl = 0;
  char operation = 0;
  int zweiteZahl = 0;
  int ergebnis = 0;
 
  // Frage nach den Zahlen
  // hier könnte natürlich auch eine kleine Schleife auswerten, ob die eingabe überhaupt eine Zahl ist.
  printf("Wie lautet die erste Zahl?        ");
  scanf("%d\n",&ersteZahl);
  
  printf("Welche Operation wird gewünscht?  ");
  scanf("%c",&operation);
  
  printf("Wie lautet die andere Zahl?       ");
  scanf("%d",&zweiteZahl);
  
  // berechne das Ergebnis (suche passende operation)
  switch( operation )
  {
  case '+':
    ergebnis=ersteZahl+zweiteZahl;
    break;
  case '-':
    ergebnis=ersteZahl-zweiteZahl;
    break;
  case '*':
    ergebnis=ersteZahl*zweiteZahl;
    break;
  case '/':
    ergebnis=ersteZahl/zweiteZahl;
    break;
  case '%':
    ergebnis=ersteZahl%zweiteZahl;
    break;
  case '|':
    ergebnis=ersteZahl|zweiteZahl;
    break;
  case '&':
    ergebnis=ersteZahl&zweiteZahl;
    break;
  case '^':
    ergebnis=ersteZahl^zweiteZahl;
    break;
  default:
    fprintf(stderr, "\'%c\' ist keine gültige Eingabe\n");
    return -1;
  }
  
  printf("----------------------------------------\n");
  printf("Ergebnis für %d%c%d                  %d\n", ersteZahl, operation, zweiteZahl, ergebnis);
  
  
  return 0;
} 
