/*Napisz funkcj� find_max_pointed_numbers, kt�ra ma dwa argumenty. Pierwszym argumentem jest wska�nik num1 na sta�� warto�� typu double, a drugim argumentem jest sta�y wska�nik num2 na zmienn� typu double. Funkcja find_max_pointed_numbers ma zwr�ci� liczb�
zawieraj�c� wi�ksz� warto�� spo�r�d warto�ci wskazywanych przez pierwszy i drugi wska�nik.
Stw�rz przypadek testowy dla funkcji. */

#include <stdio.h>
#include <stdlib.h>

double find_max_pointed_numbers( const double *num1, double *const num2){
    return (*num1 > *num2) ? *num1 : *num2;

}

int main()
{
    double a = 4.2;
    double b = -3.4;

    printf("%.2lf", find_max_pointed_numbers(&a, &b));
    return 0;
}
