/*Utw�rz program, kt�ry wczytuje od u�ytkownika liczb� zmiennoprzecinkow� reprezentuj�c� kwot� w dolarach, a nast�pnie wypisuje, ile to jest euro, przyjmuj�c sta�y kurs wymiany (np. 1 dolar = 0.85 euro). */

#include <stdio.h>

int main() {
    double dolary, euro;
    const double kurs_wymiany = 0.85;
    printf("Podaj kwote w dolarach: ");
    scanf("%lf", &dolary);
    euro = dolary * kurs_wymiany;
    printf("Kwota w euro: %.2f EUR\n", euro);
    return 0;
}
