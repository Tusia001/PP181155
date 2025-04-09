/* LAB Napisz funkcj� shiftLeft, kt�rej argumentami s� dodatnia liczba ca�kowita n reprezentuj�ca rozmiar tablicy oraz n-elementowa tablica tab o elementach typu float. Funkcja
ta ma przesun�� wszystkie elementy tablicy o jedn� pozycj� w lewo, a ostatni element
w tablicy powinien zosta� zast�piony przez pierwszy element oryginalnej tablicy. Zak�adamy, �e tablica nie jest pusta. Stw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

void shiftLeft(int n, int tab[]){
    int temp =tab[0];
    for(int i=0;i<n-1;i++){
        tab[i] = tab[i+1];
    }
    tab[n-1] = temp;
}

void printTable(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {3,-2,7,-8,4};
    printTable(5, tab);
    shiftLeft(5, tab);
    printTable(5, tab);
    return 0;
}
