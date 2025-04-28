/* LAB Napisz funkcj� countVow przyjmuj�c� jako argument tablic� znak�w typu char i zwracaj�c� liczb� znak�w w tej tablicy, kt�re s� samog�oskami z alfabetu �aci�skiego. Nie korzystaj ze wbudowanych funkcji j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji. */


#include <stdio.h>
#include <stdlib.h>

int countNums(char txt[]){
    int counter =0;
    for(int i=0; txt[i] !=0;i++){
        if ('0' <= txt[i] && txt[i] <= '9'){
            counter++;
        }
    }
    return counter;
}

int main()
{
    printf("%d\n", countNums("ghsdh5654gs"));
    return 0;
}
