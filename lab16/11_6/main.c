/* Napisz funkcj� toLowerNew, kt�ra przyjmuje jako argument tablic� znak�w typu char i
zamienia w niej wszystkie du�e litery na ma�e. Nie korzystaj ze wbudowanych funkcji
j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji.*/

#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char txt[]){
    for(int i=0;txt[i]!=0;i++){
        if ('A' <=txt[i] && txt[i] <='Z'){
            txt[i] -= ('A'-'a');
        }
    }
}

int main()
{
    char t1[] = "OLszTyn123abc";
    toLowerNew(t1);
    printf("%s\n", t1);
    return 0;
}
