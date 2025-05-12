/*Napisz funkcjê swapColumns, która przyjmuje jako argumenty dwuwymiarow¹ tablicê tablic liczb ca³kowitych, jej wymiary oraz dwa indeksy kolumn do zamiany miejscami. Funkcja powinna przestawiæ wskazane kolumny i zwróciæ zmodyfikowan¹ tablicê. Uwzglêdnij sytuacjê, jeœli podane indeksy s¹ nieprawid³owe - wtedy funkcja ma nic nie robiæ. Stwórz przypadek testowy dla funkcji.*/

#include <stdio.h>
#include <stdlib.h>

void swapColumns(int n, int m, int **tab, int col1, int col2){
     if (col1 < 0 || col2 < 0 || col1 >= m || col2 >= m || col1 == col2){
        return;
    }
    for(int i = 0; i < n; i++){
        int temp = tab[i][col1];
        tab[i][col1] = tab[i][col2];
        tab[i][col2] = temp;
    }
}

void printTable(int n, int m, int **tab){
    for(int i = 0; i <n; i++){
        for (int j = 0; j < m; j++){
            printf("[%d]", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int **tab = malloc(3 * sizeof(int*));
    for(int i = 0; i < 3; i++){
        tab[i] = malloc(4 * sizeof(int));
    }

    tab[0][0] = 1; tab[0][1] = 2; tab[0][2] = 3; tab[0][3] = 4;
    tab[1][0] = 5; tab[1][1] = 6; tab[1][2] = 7; tab[1][3] = 8;
    tab[2][0] = 9; tab[2][1] = 0; tab[2][2] = -1; tab[2][3] = -2;

    printTable(3, 4, tab);
    swapColumns(3, 4, tab, 1, 3);
    printTable(3, 4, tab);

    for(int i = 0; i < 3; i++) {
        free(tab[i]);
    }
    free(tab);
    return 0;
}
