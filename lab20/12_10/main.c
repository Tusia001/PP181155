/* LAB Napisz funkcj� revRowArr, kt�ra dostaje jako argumenty dwie dodatnie liczby ca�kowite n i m oraz dwuwymiarow� tablic� tablic o elementach typu int o wymiarach n x m. Funkcja ma odwr�ci� kolejno�� element�w w ka�dym wierszu. Stw�rz przypadek testowy dla funkcji.*/

#include <stdio.h>
#include <stdlib.h>

void revRowArr(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            int temp = tab[i][j];
            tab[i][j] = tab[i][m-1-j];
            tab[i][m-1-j] = temp;
        }
    }
}

void printTable(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d][%d] = %d, ",i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab = malloc(2*sizeof(int*));
    tab[0] = malloc(4*sizeof(int));
    tab[1] = malloc(4*sizeof(int));
    tab[0][0] =  4; tab[0][1] = -1; tab[0][2] =  8; tab[0][3] =  7;
    tab[1][0] =  9; tab[1][1] =  2; tab[1][2] =  4; tab[1][3] = -2;
    printTable(2,4, tab);
    revRowArr(2,4, tab);
    printTable(2,4, tab);
    return 0;
}



