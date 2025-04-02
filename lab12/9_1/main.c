/* LABY - Napisz funkcjê calculate, która przyjmuje dwa argumenty: wskaŸnik na funkcjê operation oraz liczbê ca³kowit¹ number. Funkcja operation ma przyjmowaæ jeden argument typu int i zwracaæ wartoœæ typu int. Funkcja calculate powinna wywo³aæ funkcjê operation z argumentem number i zwróciæ jej wynik. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculate(int(*operation)(int), int number){
    return operation(number);
}

int foo(int arg){
    return arg+8;
}

int main()
{
    printf("%d\n", calculate(foo, 8));
    return 0;
}
