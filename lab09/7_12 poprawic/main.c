/* DO POPRAWY -
Napisz funkcję calculateGeometricSequenceRecursively, której argumentami są dwie
liczby całkowite: dodatnie 𝑛 (numer wyrazu ciągu do obliczenia) oraz 𝑑 (iloraz ciągu
geometrycznego), przy założeniu, że wyraz początkowy ciągu 𝑎1 wynosi 1. Funkcja
ma zwracać 𝑛-ty wyraz ciągu geometrycznego, obliczony metodą rekurencyjną. Stwórz
przypadek testowy.
*/

#include <stdio.h>
#include <stdlib.h>

int calculateGeometricSequenceRecursively(int n, int d){
    if (n <= 0){
        exit(-1);
    }
    if(n==1){
        return 1;
    }
    return d * calculateGeometricSequenceRecursively(n-1, d);
}

int main()
{
    printf("%d", calculateGeometricSequenceRecursively(5, 3));
    return 0;
}
