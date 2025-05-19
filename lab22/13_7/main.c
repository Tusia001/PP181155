/* LAB Napisz strukturê Car z polami brand (tablica znaków d³ugoœci 20) oraz mileage (typu int). Nastêpnie napisz funkcje i wywo³aj ka¿d¹ z nich co najmniej jeden raz:
    a. initCar - funkcja przyjmuje dwa argumenty: markê i przebieg, i zwraca nowo-utworzon¹ strukturê ustawiaj¹c¹ sk³adowe z przekazanych argumentów.
    b. showCar - funkcja, której argumentem jest zmienna w typie Car. Funkcja ma wypisaæ opis przekazanego argumentu (wypisaæ markê i przebieg na standardowym wyjœciu).
    c. mileageService - funkcja, której argumentem jest wskaŸnik do struktury typu Car. Funkcja ma dodaæ 10000 do przebiegu w przekazanym argumencie.
Stwórz przypadek testowy dla ka¿dej z funkcji. */

#include <stdio.h>
#include <stdlib.h>

struct Car{
    char brand[20];
    int mileage;
};

struct Car initCar(char brand[], int mileage){
    struct Car temp;
    temp.mileage = mileage;
    int i;
    for(i=0;brand[i] !=0;i++){
        temp.brand[i] = brand[i];
    }
    temp.brand[i] = 0;
    return temp;
}

void showCar(struct Car arg){
    printf("%s %d\n", arg.brand, arg.mileage);
}

void mileageService(struct Car * p1){
    p1->mileage +=10000;
}

int main()
{
    struct Car c1 = initCar("Skoda", 7000);
    showCar(c1);
    mileageService(&c1);
    showCar(c1);
    return 0;
}
