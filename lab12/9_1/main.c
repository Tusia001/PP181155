/* LABY - Napisz funkcj� calculate, kt�ra przyjmuje dwa argumenty: wska�nik na funkcj� operation oraz liczb� ca�kowit� number. Funkcja operation ma przyjmowa� jeden argument typu int i zwraca� warto�� typu int. Funkcja calculate powinna wywo�a� funkcj� operation z argumentem number i zwr�ci� jej wynik. Stw�rz przypadek testowy. */

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
