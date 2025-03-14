/*Utwórz program, który prosi u¿ytkownika o wprowadzenie dwóch liter (znaków), a nastêpnie wypisuje je w odwrotnej kolejnoœci.*/

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
