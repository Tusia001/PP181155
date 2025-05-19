/* LAB Napisz strukturê Person z polami name (tablica znaków d³ugoœci 20) oraz age (typu int). Nastêpnie napisz funkcje i wywo³aj¹ ka¿d¹ z nich co najmniej jeden raz:

a. initPerson - funkcja przyjmuje dwa argumentem imiê i wiek i zwraca wskaŸnik na nowo-utworzon¹ strukturê ustawiaj¹c¹ sk³adowe z przekazanych argumentów.
b. showPerson - funkcja, której argumentem jest zmienna w typie Person. Funkcja ma wypisaæ opis przekazanego argumentu (wpisaæ wiek i imiê na standardowym wyjœciu).
c. birthday - funkcja, której argumentem jest wskaŸnik do struktury typu Person. Funkcja ma powiêkszyæ wiek o 1 w przekazanym argumencie.
Stwórz przypadek testowy dla ka¿dej z funkcji. */

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
