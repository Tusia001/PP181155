/*Napisz program, kt�ry prosi u�ytkownika o wprowadzenie dodatniej liczby
ca�kowitej n, a nast�pnie oblicza i wy�wietla
 (cz�� ca�kowita/pod�oga pierwiastka kwadratowego). */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba, i = 0;

    printf("Podaj dodatnia liczbe calkowita: ");
    scanf("%d", &liczba);

    while ((i + 1) * (i + 1) <= liczba) {
        i++;
    }

    printf("floor(sqrt(%d)) = %d\n", liczba, i);
    return 0;
}

