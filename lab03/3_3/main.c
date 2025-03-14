/*Napisz program, kt�ry prosi o wprowadzenie oceny w skali od 1 do 5. Program powinien wy�wietli� opis oceny: niedostateczny (1), dopuszczaj�cy (2), dostateczny (3), dobry (4), bardzo dobry (5). Dla liczby spoza zakresu, program powinien wy�wietli� komunikat o b��dzie. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int ocena;

    printf("Podaj ocen� w skali od 1 do 5: ");
    scanf("%d", &ocena);

    switch (ocena) {
        case 1:
            printf("Niedostateczny");
            break;
        case 2:
            printf("Dopuszczaj�cy");
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
