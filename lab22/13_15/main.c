/* EGZAMIN/URYWKI KOLOS/LAB Napisz strukturê Computer z polami manufacturer (tablica znaków d³ugoœci 30) oraz usage_hours (typu int). Nastêpnie napisz dwie funkcje i wywo³aj ka¿d¹ z nich co najmniej jeden raz:
    a. initComputer - funkcja przyjmuje dwa argumenty: producenta i liczbê godzin u¿ywania, i zwraca wskaŸnik na nowo utworzon¹ strukturê, ustawiaj¹c wartoœci zgodnie z przekazanymi argumentami. Funkcja powinna tak¿e sprawdzaæ, czy nazwa producenta ma co najmniej 2 znaki i liczba godzin jest wiêksza od 0. Jeœli oba warunki nie s¹ spe³nione ³¹cznie, funkcja powinna zwracaæ NULL.
    b. increaseUsage - funkcja, której argumentem jest wskaŸnik do struktury Computer. Funkcja powinna dodaæ 100 do liczby godzin u¿ytkowania.
Upewnij siê, ¿e drug¹ funkcjê mo¿esz wywo³aæ w main. */

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
