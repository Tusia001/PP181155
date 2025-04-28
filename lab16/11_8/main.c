/* LAB 8. Napisz funkcj� strCopyNew, kt�ra otrzymuje dwa argumenty typu char[] (tablice znak�w): �r�d�ow� i docelow�. Funkcja przepisuje napis znajduj�cy si� w tablicy �r�d�owejdo tablicy docelowej. Zak�adamy, �e w tablicy docelowej jest wystarczaj�co du�o miejsca. Nie korzystaj ze wbudowanych funkcji j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji. */

#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char src[], char dest[]){
    int i;
    for(i=0; src[i] !=0; i++){
        dest[i] = src[i];
    }
    dest[i] = 0;
}

int main()
{
    char t1[] = "ABC";
    char t2[] = "OLSZTYN";
    printf("%s %s\n", t1, t2);
    strCopyNew(t1, t2);
    printf("%s %s\n", t1, t2);
    return 0;
}
