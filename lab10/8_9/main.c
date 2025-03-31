/* LAB - POPRAWIONE - Napisz funkcjê sqrCopy z dwoma argumentami: wskaŸnikiem na sta³¹ typu int i wskaŸnikiem na zmienn¹ typu int. Funkcja ma przepisaæ kwadrat wartoœci sta³ej do zmiennej
wskazywanej przez drugi argument. Utwórz przypadek testowy */

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
