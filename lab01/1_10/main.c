/*Zaprojektuj program, kt�ry pokazuje, jak wypisa� na ekranie nast�puj�cy tekst: Specjalne znaki: \t (tabulacja), \n (nowa linia), % (procent), \\ (uko�nik wsteczny).. */

#include <stdio.h>

int main() {
    printf("Specjalne znaki:\n");
    printf("\\t (tabulacja):\tPrzykladowy tekst\n");
    printf("\\n (nowa linia):\nNowa linia tutaj\n");
    printf("%% (procent): 50%% znizki\n");
    printf("\\\\ (uko�nik wsteczny).");
    return 0;
}
