/*Napisz funkcjê sumNumbers, której argumentem jest dodatnia liczba ca³kowita . Funkcja ma zwracaæ sumê liczb od 1 do n w³¹cznie. Stwórz przypadek testowy. */
#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int n){
    int suma = 0;
    if(n < 0){
        exit(-1);
    }
    for(int i = 1; i <= n; i++){
        suma += i;
    }
    return suma;
}

int main()
{
    printf("%d\n", sumNumbers(4));
    return 0;
}
