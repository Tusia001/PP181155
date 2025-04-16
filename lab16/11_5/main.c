/* LABY 5. Napisz funkcj� lexComp przyjmuj�c� dwa argumenty typu char[] (tablice znak�w) i zwracaj�c� 1, je�li pierwszy napis jest wcze�niej w porz�dku leksykograficznym ni� drugi, oraz 0 w pozosta�ych przypadkach. Nie korzystaj ze wbudowanych funkcji j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji.*/

#include <stdio.h>
#include <stdlib.h>

int lexComp(char txt1[], char txt2[]){
    int i;
    for(i=0;txt1[i] !=0 && txt2[i] !=0; i++){
        if (txt1[i] <txt2[i]){
            return 1;
        }
        if (txt1[i] >txt2[i]){
            return 0;
        }
    }
    if(txt1[i] !=0){
        return 0;
    }
    if(txt2[i] !=0){
        return 1;
    }
    return 0;
}

int main()
{
    printf("%d\n", lexComp("KOT","DOM")); //0
    printf("%d\n", lexComp("DOM","KOT")); //1
    printf("%d\n", lexComp("KLMN","abc")); //1
    printf("%d\n", lexComp("DOM","DOMEK")); //1
    printf("%d\n", lexComp("DOMEK","DOM")); //0
    return 0;
}
