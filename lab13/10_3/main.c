/* Napisz funkcję sumSquares, której argumentem jest dodatnia liczba całkowita 𝑛 oraz 𝑛-
elementowa tablica tab o elementach typu int oraz zwraca sumę kwadratów elementów
tablicy. Stwórz przypadek testowy.
 */


#include <stdio.h>
#include <stdlib.h>

int sumSquares(int n, int tab[]){
    int sum = 0;
    for(int i = 0 ; i < n; i++){
        sum = sum + (tab[i]*tab[i]);
    }
    return sum;
}

int main()
{
    int tab[] = {1, 2, 3};
    printf("%d\n", sumSquares(3, tab));
    return 0;
}
