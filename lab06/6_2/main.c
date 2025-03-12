/*Utwórz program, który prosi u¿ytkownika o wprowadzenie liczby ca³kowitej n,
a nastêpnie wyœwietla sumê
wszystkich liczb ca³kowitych od 1 do n u¿ywaj¹c pêtli while. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, suma = 0, i = 1;

    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);

    while( i <= n){
        suma += i;
        i++;
    }
    printf("Suma : %d", suma);

    return 0;
}
