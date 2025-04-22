/* 8. Napisz funkcjê strCopyNew, która otrzymuje dwa argumenty typu char[] (tablice znaków): Ÿród³ow¹ i docelow¹. Funkcja przepisuje napis znajduj¹cy siê w tablicy Ÿród³owejdo tablicy docelowej. Zak³adamy, ¿e w tablicy docelowej jest wystarczaj¹co du¿o miejsca. Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji. */

#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char tab1[], char tab2[]){
    int i = 0;
    while(tab1[i]!= '\0'){
    tab2[i]=tab1[i];
    }
    tab2[i] = '\0';
}

int main()
{
    char t1[]='Zamiana';
    char t2[];
    strCopyNew(t1, t2);
    printf("%s", t1);
    return 0;
}
