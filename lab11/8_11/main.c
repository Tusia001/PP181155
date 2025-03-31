/* Napisz funkcj� sumSqrs z dwoma argumentami: wska�nikiem num1 na sta�� warto�� typu int i sta�ym wska�nikiem num2 na zmienn� typu int. Funkcja ma zwraca� sum� kwadrat�w warto�ci wskazywanych przez num1 i num2. Utw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int sumSqrs(const int *num1; const *int num2){
    return (*num1)**(*num1) + (*num2)**(*num2);
}

int main()
{
    int num1 = 3;
    int num2 = 4;
    printf("%d", sumSqrs(&num1, &num2));
    return 0;
}
