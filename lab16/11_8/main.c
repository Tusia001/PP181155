/* LAB 8. Napisz funkcjê strCopyNew, która otrzymuje dwa argumenty typu char[] (tablice znaków): Ÿród³ow¹ i docelow¹. Funkcja przepisuje napis znajduj¹cy siê w tablicy Ÿród³owejdo tablicy docelowej. Zak³adamy, ¿e w tablicy docelowej jest wystarczaj¹co du¿o miejsca. Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji. */

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
