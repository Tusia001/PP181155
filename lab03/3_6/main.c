/*Napisz program, kt�ry przyjmuje od u�ytkownika dwie liczby ca�kowite i wy�wietla informacj�, czy suma obu liczb jest parzysta czy nieparzysta. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, suma;
    scanf("%d %d", &a, &b);

    suma = a+b;

    if(suma % 2 == 0){
        printf("suma parzysta");
    }
    else {
        printf("suma nieparzysta");
    }
    return 0;

}
