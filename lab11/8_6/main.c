/* LABY - Napisz funkcjê initFloats, która nie przyjmuje argumentów i rezerwuje blok trzech
zmiennych typu float, ustawiaj¹c ich wartoœci kolejno na 4.5, 2.3, -4.2. Funkcja zwraca
wskaŸnik na pocz¹tkow¹ ze zmiennych w bloku. Utwórz przypadek testowy w funkcji
main, który wyœwietla wartoœci z bloku stworzonego przez funkcjê. */


#include <stdio.h>
#include <stdlib.h>

float* initFloats(){
    float * temp = malloc(3*sizeof(float));
    if (temp == NULL){
        return NULL;
    }
    *temp = 4.5,
    *(temp+1) = 2.3;
    *(temp+2) = -4.2;
    return temp;
}

int main()
{
    float * result = initFloats();
    printf("%f\n", *result);
    printf("%f\n", *(result+1));
    printf("%f\n", *(result+2));
    free(result);
    return 0;
}

