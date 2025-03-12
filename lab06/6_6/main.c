/* WA¯NE!!!! */
/*Napisz program, który prosi u¿ytkownika o wprowadzenie dodatniej liczby
ca³kowitej n, a nastêpnie oblicza i wyœwietla
 (czêœæ ca³kowita/pod³oga pierwiastka kwadratowego). */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba, i = 0;

    printf("Podaj dodatnia liczbe calkowita: ");
    scanf("%d", &liczba);

    while (i*i <= liczba) {
        i++;
    }

    printf("floor(sqrt(%d)) = %d\n", liczba, i-1);
    return 0;
}

