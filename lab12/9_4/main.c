/* LABY  Napisz funkcjê calculateOperation, która przyjmuje jako argumenty: wskaŸnik na funkcjê operation, która przyjmuje dwa argumenty typu double i zwraca double, oraz dwa argumenty typu double - number1 i number2. Funkcja calculateOperation ma zwracaæ wynik wywo³ania funkcji operation na argumentach number1 i number2. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

double calculateOperation(double (*operation)(double, double), double number1, double number2){
    return operation(number1, number2);
}

double pom(double arg1, double arg2){
    return arg1+arg2+5;
}

int main()
{
    printf("%lf\n", calculateOperation(pom, 3.4, 1.2));
    return 0;
}
