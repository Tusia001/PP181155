/* 8. Napisz funkcj� strCopyNew, kt�ra otrzymuje dwa argumenty typu char[] (tablice znak�w): �r�d�ow� i docelow�. Funkcja przepisuje napis znajduj�cy si� w tablicy �r�d�owejdo tablicy docelowej. Zak�adamy, �e w tablicy docelowej jest wystarczaj�co du�o miejsca. Nie korzystaj ze wbudowanych funkcji j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji. */

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
