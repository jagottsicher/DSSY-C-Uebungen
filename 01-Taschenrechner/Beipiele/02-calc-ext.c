/*
 * Übungsaufgabe
 * Aufgabe: Schreibe einen einfachen Taschenrechner
 *
*/

// benutzt printf/sscanf

#define BUFFERSIZE 255

#include <stdio.h>

int main () {

  float x, y, ergebnis;

  char operand[2];
  char line[BUFFERSIZE]; // Das ist ein String: ein array von Zeichen (Char)

  while (1)
  {
    printf("Aufgabe eingeben, dann [ENTER] fuer Berechnung => ");

    // scanf reads from the standard input stream stdin.
    // fscanf reads from the named input stream.
    // sscanf reads from the character string s.
    // Each function reads characters, interprets them according to a format,
    // and stores the results in its arguments. Each expects, as arguments,
    // a control string format described below, and a set of pointer arguments
    // indicating where the converted input should be stored.

    if ( fgets(line, BUFFERSIZE,stdin) && sscanf(line,"%f%1s%f", &x, operand, &y) == 3 )
    {
        switch ( operand[0] )
        {
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
        printf("%f %s %f = %f\n\n", x, operand, y, ergebnis);

        // Gleiche Ausgabe, aber Ausgabe auf zwei Stellen nach dem Komma gerundet
        // Hinweis: die Ausgabe der Werte ist gerundet, nicht die Inhalte der Variablen selbst!
        printf("%.2f %s %.2f = %.2f\n\n", x, operand, y, ergebnis);

        }
        else
        {
            fputs("Fehlerhafte Eingabe!\n", stderr);
            return -1;
        }
    }

return 0;
}

