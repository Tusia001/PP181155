/*Napisz program, kt�ry wczytuje ze standardowego wej�cia ca�kowit� i wypisuje na standardowym wyj�ciu jej warto�� bezwzgl�dn�. */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int liczba;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);
    printf("Wartosc bezwzgledna: %d\n", abs(liczba));
    return 0;
}
