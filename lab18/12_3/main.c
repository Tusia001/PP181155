/*lab Napisz funkcjê maxRowIdx, która dostaje jako argumenty dwie dodatnie liczby ca³kowite n i m oraz dwuwymiarow¹ tablicê o elementach typu int o wymiarach n x m, . Funkcja ma zwróciæ indeks wiersza, w którym znajduje siê najwiêkszy element (w przypadku kilku mo¿liwych indeksów, zwróæ najmniejszy z mo¿liwych). Stwórz przypadek testowy dla funkcji. */

#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n,int m, int tab[][m]){
    int maximum = tab[0][0];
    int rowIndex = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (maximum < tab[i][j]){
                maximum = tab[i][j];
                rowIndex =i;
            }
        }
    }
    return rowIndex;
}

int main()
{
    int tab[2][3] = {{2,-3,4},{19,4,-5}};
    printf("%d\n", maxRowIdx(2,3,tab));
    return 0;
}
