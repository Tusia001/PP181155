/* LAB Napisz funkcjê wStrCopyNew, która otrzymuje dwa argumenty typu wchar_t[] (tablice znaków): Ÿród³ow¹ i docelow¹. Funkcja przepisuje napis znajduj¹cy siê w tablicy Ÿród³owej do tablicy docelowej. Zak³adamy, ¿e w tablicy docelowej jest wystarczaj¹co du¿o miejsca. Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji.*/



#include <stdio.h>
#include <stdlib.h>

void strCopyNew(wchar_t src[], wchar_t dest[]){
    int i;
    for(i=0; src[i] !=0; i++){
        dest[i] = src[i];
    }
    dest[i] = 0;
}

int main()
{
    wchar_t t1[] = L"ABC";
    wchar_t t2[] = L"OLSZTYN";
    wprintf(L"%ls %ls\n", t1, t2);
    strCopyNew(t1, t2);
    wprintf(L"%ls %ls\n", t1, t2);
    return 0;
}
