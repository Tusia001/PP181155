// KOLOS/EGZAMIN
/* Napisz funkcj� copyInt z argumentami: x typu int oraz w, kt�ry jest wska�nikiem
do int. Funkcja ma przepisa� warto�� x do zmiennej wskazywanej przez w. Stw�rz
przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int *w){
    *w = x;
}

int main()
{
    int a = 7, b = 8;
    printf("%d %d\n", a, b);
    copyInt(a, &b);
    printf("%d %d", a, b);
    return 0;
}
