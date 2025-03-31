/* LABY - Napisz funkcj� swap z dwoma argumentami: wska�nikiem ptr1 na zmienn� typu int i wska�nikiem ptr2 na inn� zmienn� tego samego typu. Funkcja zamienia miejscami warto�ci wskazywane przez wska�niki. Utw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


int main()
{
    int x=9, y=3;
    printf("b %d %d\n", x,y);
    swap(&x,&y);
    printf("c %d %d\n", x,y);
    return 0;
}
