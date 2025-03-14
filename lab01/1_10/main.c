/*Zaprojektuj program, który pokazuje, jak wypisaæ na ekranie nastêpuj¹cy tekst: Specjalne znaki: \t (tabulacja), \n (nowa linia), % (procent), \\ (ukoœnik wsteczny).. */

#include <stdio.h>

int main() {
    printf("Specjalne znaki:\n");
    printf("\\t (tabulacja):\tPrzykladowy tekst\n");
    printf("\\n (nowa linia):\nNowa linia tutaj\n");
    printf("%% (procent): 50%% znizki\n");
    printf("\\\\ (ukoœnik wsteczny).");
    return 0;
}
