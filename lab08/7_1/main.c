/* Napisz funkcj� sumTwoNumbers, kt�rej argumentami s� dwie liczby ca�kowite. Funkcja ma wy�wietla� sum� liczb przekazany jako argument funkcji. Stw�rz przypadek testowy. */

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
