// Napisz funkcj� indexUpperCase, kt�rej argumentem jest napis. Funkcja zwraca numer indeksu,na kt�rym wyst�puje ostatnia wielka litera. W przypadku pustego napisu lub braku wielkich liter, funkcja powinna zwraca� -1. W zadaniu nie korzystaj z funkcji bibliotecznych poza instrukcjami wej�cia/wyj�cia. Stw�rz przypadek testowy.//
#include <stdio.h>
#include <stdlib.h>

int indexUpperCase(char *napis){
    int ind = -1;
    for(int i = 0; napis[i] != 0; i++){
        if(napis[i] >= 'A' && napis[i] <= 'Z'){
            ind = i;
        }
    }
    return ind;
}

int main()
{
    char napis1[] = " ";
    char napis2[] = "hello world";
    char napis3[] = "Hello World";

    printf("%d\n", indexUpperCase(napis1));
    printf("%d\n", indexUpperCase(napis2));
    printf("%d\n", indexUpperCase(napis3));
    return 0;
}
