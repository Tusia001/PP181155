/* Napisz program, kt�ry prosi u�ytkownika o wprowadzenie dodatniej liczby ca�kowitej n, a nast�pnie oblicza i wy�wietla (cz�� ca�kowita/pod�oga pierwiastka sze�ciennego). Zadanie
nale�y rozwi�za� bez tablic, wska�nik�w, wbudowanych funkcji matematycznych. Nie tw�rz
samodzielnie te� w�asnych funkcji.
Przyk�ad: dla n=27 powinno by� wy�wietlone 3, za� dla n=77 powinno by� wy�wietlone 4. */


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Podaj dodatnia liczbe calkowita: ");
    scanf("%d", &n);

    int result = 0;
    while (result * result * result <= n) {
        result++;
    }
    result--;

    printf("%d\n", result);
    return 0;
}
