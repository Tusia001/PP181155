/* Napisz funkcj� sqrCopy z dwoma argumentami: wska�nikiem na sta�� typu int i wska�nikiem na zmienn� typu int. Funkcja ma przepisa� kwadrat warto�ci sta�ej do zmiennej
wskazywanej przez drugi argument. Utw�rz przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

void sqrCopy(int * n, int *w){
    *n = (*w)*(*w);
}


int main()
{
    printf("Hello world!\n");
    return 0;
}
