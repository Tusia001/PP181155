/* LABY Napisz funkcjê modifyAndSum, która ma przyjmowaæ jako argument wskaŸnik na funkcjê modifier, która przyjmuje jeden argument typu int i zwraca int, oraz dwa argumenty typu int: number1 i number2. Funkcja modifyAndSum powinna modyfikowaæ obie liczby za pomoc¹ funkcji modifier i zwracaæ ich sumê. Przyk³adem funkcji modifier mo¿e byæ funkcja, która zwiêksza liczbê o 1 lub zmienia znak liczby. Stwórz przypadek testowy. */

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
