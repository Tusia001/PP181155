#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba, suma;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    suma = liczba + liczba + 1 + liczba +2;
    printf("Suma = %d", suma);
    return 0;
}
