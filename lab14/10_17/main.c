/*LABY Napisz funkcjê o nazwie findElement, która przyjmuje jako argumenty tablicê liczb ca³kowitych, rozmiar tablicy, liczbê ca³kowit¹ val do znalezienia oraz wskaŸnik na funkcjê isEqual. Funkcja isEqual przyjmuje jako argumenty dwie liczby ca³kowite i zwraca wartoœæ typu 0 lub 1, oznaczaj¹c¹ odpowiednio, czy liczby s¹ równe. Funkcja findElement powinna przeszukiwaæ tablicê w celu znalezienia wartoœci val zgodnie z zasadami okreœlonymi przez funkcjê isEqual, a nastêpnie zwróciæ indeks tego elementu w tablicy (pierwszego napotkanego) lub -1, jeœli element nie istnieje. Stwórz przypadek testowy dla funkcji findElement. */

// wskazniki na funkcje  - nie bêdzie na kolosie. BÊDZIE EGZAMIN!!!!


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
