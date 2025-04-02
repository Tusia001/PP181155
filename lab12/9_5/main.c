/* LABY Napisz funkcj� modifyAndSum, kt�ra ma przyjmowa� jako argument wska�nik na funkcj� modifier, kt�ra przyjmuje jeden argument typu int i zwraca int, oraz dwa argumenty typu int: number1 i number2. Funkcja modifyAndSum powinna modyfikowa� obie liczby za pomoc� funkcji modifier i zwraca� ich sum�. Przyk�adem funkcji modifier mo�e by� funkcja, kt�ra zwi�ksza liczb� o 1 lub zmienia znak liczby. Stw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int modifyAndSum(int(*modifier)(int), int number1, int number2){
    return modifier(number1) + modifier(number2);
}
int changeSign(int arg){
    return -arg;
}

int main()
{
    printf("%d\n", modifyAndSum(changeSign, -3, 4));
    return 0;
}
