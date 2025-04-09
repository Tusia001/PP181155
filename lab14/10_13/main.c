/* LABY Napisz funkcjê shiftLeft, której argumentami s¹ dodatnia liczba ca³kowita n reprezentuj¹ca rozmiar tablicy oraz n-elementowa tablica tab o elementach typu int. Funkcja
ma zwróciæ wskaŸnik do nowo utworzonej dynamicznej tablicy, w której wszystkie elementy zosta³y przesuniête o jedn¹ pozycjê w lewo w stosunku do oryginalnej tablicy, a
ostatni element nowej tablicy jest równy pocz¹tkowemu elementowi oryginalnej tablicy.
Stwórz przypadek testowy  (nale¿y rozwi¹zaæ dynamicznie poprzez wskazniki)*/

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
