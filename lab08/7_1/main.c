/* Napisz funkcjê sumTwoNumbers, której argumentami s¹ dwie liczby ca³kowite. Funkcja ma wyœwietlaæ sumê liczb przekazany jako argument funkcji. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

void sumTwoNumbers(int a, int b){
    printf("%d\n", a+b);
}

int main()
{
    sumTwoNumbers(4,5);
    return 0;
}
