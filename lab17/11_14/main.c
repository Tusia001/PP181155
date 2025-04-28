/* LAB Napisz funkcj� wStrCopyNew, kt�ra otrzymuje dwa argumenty typu wchar_t[] (tablice znak�w): �r�d�ow� i docelow�. Funkcja przepisuje napis znajduj�cy si� w tablicy �r�d�owej do tablicy docelowej. Zak�adamy, �e w tablicy docelowej jest wystarczaj�co du�o miejsca. Nie korzystaj ze wbudowanych funkcji j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji.*/



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
