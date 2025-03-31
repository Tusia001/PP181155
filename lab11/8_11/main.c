/* Napisz funkcjê sumSqrs z dwoma argumentami: wskaŸnikiem num1 na sta³¹ wartoœæ typu int i sta³ym wskaŸnikiem num2 na zmienn¹ typu int. Funkcja ma zwracaæ sumê kwadratów wartoœci wskazywanych przez num1 i num2. Utwórz przypadek testowy. */

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
