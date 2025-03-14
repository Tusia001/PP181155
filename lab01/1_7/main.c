/*Utwórz program, który wczytuje od u¿ytkownika liczbê zmiennoprzecinkow¹ reprezentuj¹c¹ kwotê w dolarach, a nastêpnie wypisuje, ile to jest euro, przyjmuj¹c sta³y kurs wymiany (np. 1 dolar = 0.85 euro). */

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
