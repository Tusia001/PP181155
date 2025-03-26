//* Napisz funkcjê initInts, która nie przyjmuje argumentów i rezerwuje blok trzech zmiennych typu int, ustawiaj¹c ich wartoœci kolejno na 5, -12, 33. Funkcja zwraca wskaŸnik na œrodkow¹ zmienn¹. Utwórz przypadek testowy w funkcji main, który wyœwietla wartoœci z bloku stworzonego przez funkcjê. */

#include <stdio.h>
#include <stdlib.h>

int * initInts(){
    int * ptr = malloc(3*sizeof(int));
    if (ptr == NULL){
        return NULL;
    }
    *ptr = 5;
    *(ptr+1) = -12;
    *(ptr+2) = 33;
    return ptr+1;
}

int main()
{
    int * result = initInts();
    printf("%d\n", *(result-1));
    printf("%d\n", *result);
    printf("%d\n", *(result+1));
    free(result-1);
    return 0;
}
