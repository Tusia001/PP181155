/* LABY Napisz funkcj� shiftLeft, kt�rej argumentami s� dodatnia liczba ca�kowita n reprezentuj�ca rozmiar tablicy oraz n-elementowa tablica tab o elementach typu int. Funkcja
ma zwr�ci� wska�nik do nowo utworzonej dynamicznej tablicy, w kt�rej wszystkie elementy zosta�y przesuni�te o jedn� pozycj� w lewo w stosunku do oryginalnej tablicy, a
ostatni element nowej tablicy jest r�wny pocz�tkowemu elementowi oryginalnej tablicy.
Stw�rz przypadek testowy  (nale�y rozwi�za� dynamicznie poprzez wskazniki)*/

#include <stdio.h>
#include <stdlib.h>

int * shiftLeft(int n, int *tab){
    int *temp  = malloc(n*sizeof(int));
    for(int i=0;i<n-1;i++){
        *(temp+i) = *(tab+i+1);
    }
    *(temp+n-1) = *tab;
    return temp;
}

void printTable(int n, int *tab){
    for(int i=0;i<n;i++){
        printf("%d ", *(tab+i));
    }
    printf("\n");
}

int main()
{
    int * tab = malloc(5*sizeof(int));
    *tab = -2;
    *(tab+1) = 7;
    *(tab+2) = -8;
    *(tab+3) = 4;
    *(tab+4) =3;
    printf("Before\n");
    printTable(5, tab);
    int * res = shiftLeft(5, tab);
    printf("after old\n");
    printTable(5, tab);
    printf("after new\n");
    printTable(5, res);
    return 0;
}
