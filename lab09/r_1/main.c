/*1. Napisz funkcję, która ma dwa argumenty: dodatnią liczbę całkowitą 𝑛 oraz liczbę wymierną 𝑥. Funkcja ma zwrócić jako liczbę wartość wyrażenia będącego sumą szeregu: 𝑥/1! + 𝑥^2/2! + … +𝑥^𝑛/𝑛! . W zadaniu nie korzystaj z wbudowanych funkcji matematycznych. Stwórz przypadek testowy
dla funkcji. */


#include <stdio.h>
#include <stdlib.h>

float szereg(int n, float x) {
    float suma = 0;
    float potega = x;
    int silnia = 1;

    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            potega *= x; // x^i
        }

        silnia *= i; // i!
        suma += potega / silnia;
    }
    return suma;
}

int main() {
    printf("%f", szereg(3, 4));
    return 0;
}
