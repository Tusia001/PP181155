/*Utw�rz program, kt�ry prosi u�ytkownika o wprowadzenie dw�ch liter (znak�w), a nast�pnie wypisuje je w odwrotnej kolejno�ci.*/

#include <stdio.h>

int main() {
    char znak1, znak2;
    printf("Podaj pierwszy znak: ");
    scanf(" %c", &znak1);
    printf("Podaj drugi znak: ");
    scanf(" %c", &znak2);
    printf("Odwrotna kolejnosc: %c %c\n", znak2, znak1);
    return 0;
}
