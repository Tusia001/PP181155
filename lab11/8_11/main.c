/* Napisz funkcj� sumSqrs z dwoma argumentami: wska�nikiem num1 na sta�� warto�� typu int i sta�ym wska�nikiem num2 na zmienn� typu int. Funkcja ma zwraca� sum� kwadrat�w warto�ci wskazywanych przez num1 i num2. Utw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int sumSqrs(const int *num1, int *const num2){
    return (*num1)*(*num1) + (*num2)*(*num2);
}

int main()
{
    int x = 3;
    int y = 4;
    int wynik = sumSqrs(&x, &y);
    printf("%d\n", wynik);
    printf("%d\n", sumSqrs(&x, &y));
    return 0;
}
