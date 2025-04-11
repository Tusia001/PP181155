/*Napisz funkcjê find_max_pointed_numbers, która ma dwa argumenty. Pierwszym argumentem jest wskaŸnik num1 na sta³¹ wartoœæ typu double, a drugim argumentem jest sta³y wskaŸnik num2 na zmienn¹ typu double. Funkcja find_max_pointed_numbers ma zwróciæ liczbê
zawieraj¹c¹ wiêksz¹ wartoœæ spoœród wartoœci wskazywanych przez pierwszy i drugi wskaŸnik.
Stwórz przypadek testowy dla funkcji. */

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
