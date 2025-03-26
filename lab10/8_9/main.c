/* Napisz funkcjê sqrCopy z dwoma argumentami: wskaŸnikiem na sta³¹ typu int i wskaŸnikiem na zmienn¹ typu int. Funkcja ma przepisaæ kwadrat wartoœci sta³ej do zmiennej
wskazywanej przez drugi argument. Utwórz przypadek testowy */

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
