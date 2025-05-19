/* wariant 375 zdefiniuj struktur� Bicycle z polami: make(napis), type (tablica znak�w o rozmaierze 25), yearOdManofacture (liczba ca�kowita) i isAavailableForRent (warto�� 0 lub 1), okre�laj�c� czy rower jest dost�pny do wypo�yczenia. W fnkcji main strw�rz kilka zmiennych Bicycle. */

#include <stdio.h>
#include <stdlib.h>

struct Bicycle {
    char make[30];
    char type[25];
    int yearOfManufacture;
    int isAvailableForRent;
};

void showBicycle(struct Bicycle b) {
    printf("Marka: %s, Typ: %s, Rok: %d, Dostepny: %s\n",
           b.make, b.type, b.yearOfManufacture,
           b.isAvailableForRent ? "Tak" : "Nie");
}

int main()
{
    struct Bicycle b1 = {"Kross", "Gorski", 2020, 1};
    struct Bicycle b2 = {"Inny", "Szosa", 2018, 0};
    struct Bicycle b3 = {"Romet", "Miejski", 2022, 1};

    showBicycle(b1);
    showBicycle(b2);
    showBicycle(b3);

    return 0;
}

