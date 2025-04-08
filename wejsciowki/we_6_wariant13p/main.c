/* ZROBIC we wariant 13P 07-04-2025, napisz funkcje multiplyByTwo z dwoma argumentami: wska�nikiem na sta�� typu float i wska�nikiem na zmienn� typu float. Funkcja ma pomno�y� warto�� sta�ej przez 2 i zapisa� wynik pod agresem wskazanym przez drugi argument. */


#include <stdio.h>
#include <stdlib.h>

void multiplyByTwo(const float *input, float *output){
    *output = (*input) * 2;
}


int main() {
    float liczba = 3.5;
    float wynik;

    multiplyByTwo(&liczba, &wynik);
    printf("%.2f\n", wynik);
    return 0;
}
