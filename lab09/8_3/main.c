// KOLOS/EGZAMIN
/* Napisz funkcjê copyInt z argumentami: x typu int oraz w, który jest wskaŸnikiem
do int. Funkcja ma przepisaæ wartoœæ x do zmiennej wskazywanej przez w. Stwórz
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
