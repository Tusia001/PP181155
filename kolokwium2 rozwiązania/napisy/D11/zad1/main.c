//Napisz funkcj� rmEven, kt�rej argumentem jest napis. Funkcja ma za zadanie usun�� znaki. z napisu o parzystych indeksach. Stw�rz przypadek testowy.//

#include <stdio.h>
#include <stdlib.h>

void rmEven(char *txt){
    int i = 0;
    int j = 0;
    for(i = 0; txt[i] != 0; i++){
        if(i % 2 != 0){
            txt[j]=txt[i];
            j++;
        }
    }
    txt[j] = 0;
}
int main()
{
    char napis[] = "Hello World";
    rmEven(napis);
    printf("%s\n", napis);
    return 0;
}
