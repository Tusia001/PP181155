/*Napisz program, kt�ry wy�wietla pierwszych 10 liczb ci�gu
Fibonacciego, u�ywaj�c p�tli while */
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a = 0, b = 1, temp, numer = 0;

    while (numer < 10) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
        numer++;
    }

    printf("\n");
    return 0;
}
