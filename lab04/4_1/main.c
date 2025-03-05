/*Zamieñ wartoœci dwóch zmiennych
ca³kowitych bez u¿ycia dodatkowej zmiennej. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 10;

    printf("Przed zamian¹: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Po zamianie: a = %d, b = %d\n", a, b);

    return 0;
}


