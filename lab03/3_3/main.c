/*Napisz program, który prosi o wprowadzenie oceny w skali od 1 do 5. Program powinien wyœwietliæ opis oceny: niedostateczny (1), dopuszczaj¹cy (2), dostateczny (3), dobry (4), bardzo dobry (5). Dla liczby spoza zakresu, program powinien wyœwietliæ komunikat o b³êdzie. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int ocena;

    printf("Podaj ocenê w skali od 1 do 5: ");
    scanf("%d", &ocena);

    switch (ocena) {
        case 1:
            printf("Niedostateczny");
            break;
        case 2:
            printf("Dopuszczaj¹cy");
            break;
        case 3:
            printf("Dostateczny");
            break;
        case 4:
            printf("Dobry");
            break;
        case 5:
            printf("Bardzo dobry");
            break;
        default:
            printf("Blad: Ocena musi byc w zakresie 1-5!");
    }

    return 0;
}
