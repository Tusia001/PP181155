/*WAZNE */
/*Napisz program, który prosi u¿ytkownika o wprowadzenie dodatniej
liczby ca³kowitej n, a nastêpnie oblicza i wyœwietla
(sufit pierwiastka kwadratowego). */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba, i = 0;

    printf("Podaj dodatnia liczbe calkowita: ");
    scanf("%d", &liczba);

    while (i*i < liczba) {
        i++;
    }

    printf("ceil(sqrt(%d)) = %d\n", liczba, i);
    return 0;
}
