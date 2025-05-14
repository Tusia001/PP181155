/* LAB Zdefiniuj struktur� Car z polami: brand (napis), model (tablica znak�w o rozmiarze 20), year (liczba ca�kowita) i isAvailable (warto�� 0 lub 1), kt�ra reprezentuje informacj� o dost�pno�ci samochodu na sprzeda�. W main stw�rz kilka zmiennych w typie Car. */

#include <stdio.h>
#include <stdlib.h>

struct Car {
    char *brand;
    char model[20];
    int year;
    int isAvailable;

};

int main()
{
    struct Car car1 = {"Mitsubishi", "Colt", 2005, 1};
    struct Car car2 = {"Mazda", "MX-5", 1992, 0};

    printf("Samochod 1: %s %s, Rok: %d, Dostepny: %s\n",
           car1.brand, car1.model, car1.year, car1.isAvailable ? "Tak" : "Nie");

    printf("%s\n", car2.brand);
    printf("%s\n", car2.model);
    printf("%d\n", car2.year);
    printf("%d\n", car2.isAvailable);
    return 0;
}
