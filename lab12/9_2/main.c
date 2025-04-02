/* LABY Napisz funkcj� o nazwie applyFunction, kt�ra przyjmuje trzy argumenty: wska�nik na funkcj� func, kt�ra przyjmuje jeden argument typu int i zwraca int, oraz dwie liczby ca�kowite: start i end. Funkcja applyFunction powinna wywo�a� funkcj� func dla ka�dej liczby w zakresie od start do end (w��cznie) i wydrukowa� wyniki na standardowe wyj�cie. Stw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void applyFunction(int(*func)(int), int start, int end){
    for (int i = start; i <= end; i++){
        printf("%d\n", func(i));
    }
}

int square(int(x)){
    return x*x;
}

int main()
{
    printf("1.----------\n");
    applyFunction(square, 6, 7);
    printf("2.----------\n");
    applyFunction(square, 20, 10);
    printf("3.----------\n");
    applyFunction(abs, -8, 10);
    //printf("4.----------\n");
    //applyFunction(sqrt, -8, 10); - niezgodne z formatowaniem, musi byc zwracany int
    return 0;
}
