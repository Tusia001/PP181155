/* Napisz funkcjê revCopy, która otrzymuje trzy argumenty: dodatni¹ liczbê ca³kowit¹ n
oraz dwie n-elementowe tablice tab1, tab2 o elementach typu int i przepisuje elementy
tablicy tab1 do tablicy tab2 w odwrotnej kolejnoœci. Stwórz przypadek testowy. */


#include <stdio.h>
#include <stdlib.h>

void revCopy(int n, int tab1[], int tab2[]){
    for(int i=0;i<n;i++){
        tab2[i] = tab1[n-1-i];
    }
}

void printTable(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab1[] = {3,4,-7,8};
    int tab2[] = {1,2,-9,6};
    printTable(4, tab1);
    printTable(4, tab2);
    revCopy(4, tab1,tab2);
    printTable(4, tab1);
    printTable(4, tab2);
    return 0;
}
