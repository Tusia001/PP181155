/* Napisz funkcję, która otrzymuje trzy argumenty: dodatnią liczbę całkowitą 𝑛 oraz dwie
𝑛-elementowe tablice tab1 i tab2 o elementach typu int. Funkcja powinna sprawdzić,
czy obie tablice są identyczne. Jeśli tak, funkcja powinna zwrócić 1, w przeciwnym razie
zwrócić 0. Stwórz przypadek testowy dla funkcji. */


#include <stdio.h>
#include <stdlib.h>

int isEqual(int n, int tab1[], int tab2[]){
    for(int i=0;i<n;i++){
        if (tab1[i] != tab2[i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int tab1[] = {5,6,7};
    int tab2[] = {5,3,7};
    printf("%d\n", isEqual(3, tab1, tab2));
    return 0;
}
