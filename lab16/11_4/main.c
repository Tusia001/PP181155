/*Napisz funkcjê cmpStrNew przyjmuj¹c¹ dwa argumenty typu char[] (tablice znaków) i zwracaj¹c¹ 1, jeœli napisy s¹ identyczne, oraz 0 w pozosta³ych przypadkach. Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji.*/

#include <stdio.h>
#include <stdlib.h>

int length(char txt[]){
    int i=0;
    while(txt[i] !='\0'){
        i++;
    }
    return i;
}

int cmpStrNew(char tab1[], char tab2[]){
    int dlugosc1 = length(tab1);
    int dlugosc2 = length(tab2);
    if (dlugosc1 != dlugosc2){
        return 0;
    }
    for(int i = 0; i < dlugosc1; i++){
        if(tab1[i] != tab2[i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    char txt1[] = "12m23";
    char txt2[] = "12m23";
    char txt3[] = "12m2";
    char txt4[] = "11m23";
    printf("%d\n", cmpStrNew(txt1, txt2));
    printf("%d\n", cmpStrNew(txt1, txt3));
    printf("%d\n", cmpStrNew(txt1, txt4));
    return 0;
}
