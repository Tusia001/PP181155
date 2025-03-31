/* LAB - POPRAWIONE - Napisz funkcj� sqrCopy z dwoma argumentami: wska�nikiem na sta�� typu int i wska�nikiem na zmienn� typu int. Funkcja ma przepisa� kwadrat warto�ci sta�ej do zmiennej
wskazywanej przez drugi argument. Utw�rz przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

void sqrCopy(int const * p1, int *p2){
    *p2 = (*p1) * (*p1);
}


int main()
{
    int x = 4, y = -3;
    printf("%d %d\n", x, y);
    sqrCopy(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
