/* WA�NE!!!! */
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

    while (i*i <= liczba) {
        i++;
    }

    printf("floor(sqrt(%d)) = %d\n", liczba, i-1);
    return 0;
}

