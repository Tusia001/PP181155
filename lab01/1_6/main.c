/*Napisz program, kt�ry prosi u�ytkownika o wprowadzenie jednej liczby zmiennoprzecinkowej, a nast�pnie podwaja jej warto�� i wypisuje wynik. */

#include <stdio.h>

int main() {
    double liczba;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%lf", &liczba);
    printf("Podwojona wartosc: %.2f\n", liczba * 2);
    return 0;
}
