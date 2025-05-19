/* LAB Napisz struktur� Car z polami brand (tablica znak�w d�ugo�ci 20) oraz mileage (typu int). Nast�pnie napisz funkcje i wywo�aj ka�d� z nich co najmniej jeden raz:
    a. initCar - funkcja przyjmuje dwa argumenty: mark� i przebieg, i zwraca nowo-utworzon� struktur� ustawiaj�c� sk�adowe z przekazanych argument�w.
    b. showCar - funkcja, kt�rej argumentem jest zmienna w typie Car. Funkcja ma wypisa� opis przekazanego argumentu (wypisa� mark� i przebieg na standardowym wyj�ciu).
    c. mileageService - funkcja, kt�rej argumentem jest wska�nik do struktury typu Car. Funkcja ma doda� 10000 do przebiegu w przekazanym argumencie.
Stw�rz przypadek testowy dla ka�dej z funkcji. */

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
