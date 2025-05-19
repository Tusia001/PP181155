/* LAB Napisz struktur� Person z polami name (tablica znak�w d�ugo�ci 20) oraz age (typu int). Nast�pnie napisz funkcje i wywo�aj� ka�d� z nich co najmniej jeden raz:

a. initPerson - funkcja przyjmuje dwa argumentem imi� i wiek i zwraca wska�nik na nowo-utworzon� struktur� ustawiaj�c� sk�adowe z przekazanych argument�w.
b. showPerson - funkcja, kt�rej argumentem jest zmienna w typie Person. Funkcja ma wypisa� opis przekazanego argumentu (wpisa� wiek i imi� na standardowym wyj�ciu).
c. birthday - funkcja, kt�rej argumentem jest wska�nik do struktury typu Person. Funkcja ma powi�kszy� wiek o 1 w przekazanym argumencie.
Stw�rz przypadek testowy dla ka�dej z funkcji. */

#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[20];
    int age;
};

struct Person * initPerson(char name[], int age){
    struct Person * temp = malloc(sizeof(struct Person));
    temp->age =age;
    int i;
    for(i=0;name[i] !=0;i++){
        temp->name[i] = name[i];
    }
    temp->name[i] =0;
    return temp;
}

void showPerson(struct Person arg){
    printf("%s %d\n", arg.name, arg.age);
}

void birthday(struct Person * p){
    p->age ++;
}

int main()
{
    struct Person * p1 = initPerson("Marta", 20);
    showPerson(*p1);
    birthday(p1);
    showPerson(*p1);
    return 0;
}
