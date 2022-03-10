/*
 * Übungsaufgabe
 * Aufgabe: Schreibe einen einfachen Taschenrechner
 *
*/

// benutzt printf/scanf
#include <stdio.h>

// Startpunkt der Anwendung
int main()
{
    char weiter = 'j';
      while (weiter == 'j')
      {
          // Erzeuge Variablen für die Ein- und Ausgabe
          int ersteZahl = 0;
          char operation = 0;
          int zweiteZahl = 0;
          int ergebnis = 0;

          // Frage nach den Zahlen
          // hier könnte natürlich auch eine kleine Schleife auswerten, ob die eingabe überhaupt eine Zahl ist.
          printf("Wie lautet die erste Zahl?        ");
          scanf("%d%*c",&ersteZahl);
          printf("Welche Operation wird gewünscht?  ");
          scanf("%c%*c",&operation);
          printf("Wie lautet die andere Zahl?       ");
          scanf("%d%*c",&zweiteZahl);

          // berechne das Ergebnis (suche passende operation)
          switch( operation )
          {
          case '+':
            ergebnis = ersteZahl + zweiteZahl;
            break;
          case '-':
            ergebnis = ersteZahl - zweiteZahl;
            break;
          case '*':
            ergebnis = ersteZahl * zweiteZahl;
            break;
          case '%':
            ergebnis = ersteZahl % zweiteZahl;
            break;
          case '/':

            // Division durch Null wird nicht abgefangen
            ergebnis = ersteZahl / zweiteZahl;
            break;

            // Division durch Null abfangen
//            if (!(zweiteZahl == 0))
//            {
//              ergebnis = ersteZahl / zweiteZahl;
//              break;
//            }
//            else
//            {
//              ergebnis = 0;
//              fprintf(stderr, "Division durch Null nicht definiert!\n");
//            }
            default:
            fprintf(stderr, "Das ist keine gültige Eingabe.\n\n");
            return -1;
          }

          printf("----------------------------------------\n");
          printf("Ergebnis für %d %c %d =             %d\n\n", ersteZahl, operation, zweiteZahl, ergebnis);
          printf("Nochmals probieren? (j/n)         ");
          scanf("%c%*c", &weiter);
          printf("\n");
      }
  return 0;
}
