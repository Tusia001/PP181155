/*Napisz program, który wczytuje ze standardowego wejœcia ca³kowit¹ i wypisuje na standardowym wyjœciu jej wartoœæ bezwzglêdn¹. */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int liczba;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);
    printf("Wartosc bezwzgledna: %d\n", abs(liczba));
    return 0;
}
