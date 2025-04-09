/*LABY Napisz funkcj� o nazwie findElement, kt�ra przyjmuje jako argumenty tablic� liczb ca�kowitych, rozmiar tablicy, liczb� ca�kowit� val do znalezienia oraz wska�nik na funkcj� isEqual. Funkcja isEqual przyjmuje jako argumenty dwie liczby ca�kowite i zwraca warto�� typu 0 lub 1, oznaczaj�c� odpowiednio, czy liczby s� r�wne. Funkcja findElement powinna przeszukiwa� tablic� w celu znalezienia warto�ci val zgodnie z zasadami okre�lonymi przez funkcj� isEqual, a nast�pnie zwr�ci� indeks tego elementu w tablicy (pierwszego napotkanego) lub -1, je�li element nie istnieje. Stw�rz przypadek testowy dla funkcji findElement. */

// wskazniki na funkcje  - nie b�dzie na kolosie. B�DZIE EGZAMIN!!!!


#include <stdio.h>
#include <stdlib.h>

int findElement(int tab[], int n, int val, int (*isEqual)(int, int)){
    for(int i=0;i<n;i++){
        if (isEqual(val, tab[i])==1){
            return i;
        }
    }
    return -1;
}

int eq1(int a, int b){
    return a==b;
}

int eq2(int a, int b){
    return a%5==b%5;
}

int main()
{
    int tab[] ={4,-5,2,8,0};
    printf("%d\n", findElement(tab,5,7,eq1));
    printf("%d\n", findElement(tab,5,7,eq2));
    return 0;
}
