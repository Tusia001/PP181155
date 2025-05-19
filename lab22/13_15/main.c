/* EGZAMIN/URYWKI KOLOS/LAB Napisz struktur� Computer z polami manufacturer (tablica znak�w d�ugo�ci 30) oraz usage_hours (typu int). Nast�pnie napisz dwie funkcje i wywo�aj ka�d� z nich co najmniej jeden raz:
    a. initComputer - funkcja przyjmuje dwa argumenty: producenta i liczb� godzin u�ywania, i zwraca wska�nik na nowo utworzon� struktur�, ustawiaj�c warto�ci zgodnie z przekazanymi argumentami. Funkcja powinna tak�e sprawdza�, czy nazwa producenta ma co najmniej 2 znaki i liczba godzin jest wi�ksza od 0. Je�li oba warunki nie s� spe�nione ��cznie, funkcja powinna zwraca� NULL.
    b. increaseUsage - funkcja, kt�rej argumentem jest wska�nik do struktury Computer. Funkcja powinna doda� 100 do liczby godzin u�ytkowania.
Upewnij si�, �e drug� funkcj� mo�esz wywo�a� w main. */

#include <stdio.h>
#include <stdlib.h>

struct Computer{
    char manufacturer[30];
    int usage_hours;
};

int length(char txt[]){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}

struct Computer * initComputer(char manufacturer[], int usage_hours){
    int d = length(manufacturer);
    if (d <=1 && usage_hours<=0){
        return NULL;
    }
    struct Computer * temp = malloc(sizeof(struct Computer));
    temp->usage_hours = usage_hours;
    for(int i=0;i<d;i++){
        temp->manufacturer[i] = manufacturer[i];
    }
    temp->manufacturer[d] = 0;
    return temp;
}

void showComputer(struct Computer arg){
    printf("%s %d\n", arg.manufacturer, arg.usage_hours);
}

void increaseUsage(struct Computer*p){
    p->usage_hours +=100;
}

int main()
{
    struct Computer * c1 = initComputer("Acer", 345);
    if (c1!=NULL){
        showComputer(*c1);
        increaseUsage(c1);
        showComputer(*c1);
    }

    return 0;
}
