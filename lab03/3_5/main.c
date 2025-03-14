/*Napisz program, który pyta u¿ytkownika o rok i sprawdza, czy podany rok jest rokiem przestêpnym. Rok przestêpny to taki, który jest podzielny przez 4, ale nie jest podzielny przez 100, chyba ¿e jest te¿ podzielny przez 400.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    scanf("%d", &rok);
    if (rok %4 != 0){
        printf("rok nie jest przestepny");
    }
    else {
        if (rok % 100 != 0){
            printf("rok jest przestepny");
        }
        else {
            if (rok %400 == 0){
                printf("rok jest przestepny");
            }
            else {
                printf("rok nie jest przestepny");
            }
        }
    }
}
