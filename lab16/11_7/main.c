/*Napisz funkcj� toUpperNew, kt�ra przyjmuje jako argument tablic� znak�w typu char i zamienia w niej wszystkie ma�e litery na du�e. Nie korzystaj ze wbudowanych funkcji j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji. */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char txt[]){
    for(int i=0;txt[i]!=0;i++){
        if ('a' <=txt[i] && txt[i] <='z'){
            txt[i] -= ('a'-'A');
        }
    }
}

int main()
{
    char t1[] = "Olsztyn123abc";
    toUpperNew(t1);
    printf("%s\n", t1);
    return 0;
}
