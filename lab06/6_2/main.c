/*Utw�rz program, kt�ry prosi u�ytkownika o wprowadzenie liczby ca�kowitej n,
a nast�pnie wy�wietla sum�
wszystkich liczb ca�kowitych od 1 do n u�ywaj�c p�tli while. */
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
