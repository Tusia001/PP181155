/* Napisz program, który prosi u¿ytkownika o wprowadzenie dodatniej liczby ca³kowitej n, a nastêpnie oblicza i wyœwietla (czêœæ ca³kowita/pod³oga pierwiastka szeœciennego). Zadanie
nale¿y rozwi¹zaæ bez tablic, wskaŸników, wbudowanych funkcji matematycznych. Nie twórz
samodzielnie te¿ w³asnych funkcji.
Przyk³ad: dla n=27 powinno byæ wyœwietlone 3, zaœ dla n=77 powinno byæ wyœwietlone 4. */


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
