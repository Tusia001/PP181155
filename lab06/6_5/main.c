/*Napisz program, który wyœwietla pierwszych 10 liczb ci¹gu
Fibonacciego, u¿ywaj¹c pêtli while */
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
