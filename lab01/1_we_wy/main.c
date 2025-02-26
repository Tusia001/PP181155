#include <stdio.h>
#include <stdlib.h>
int main() {
    int liczba;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);
    printf("Wartosc bezwzgledna: %d\n", abs(liczba));
    return 0;
}
