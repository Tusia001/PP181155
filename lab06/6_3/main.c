/*Napisz program, kt�ry czyta od u�ytkownika liczby ca�kowite do momentu
wprowadzenia zera i nast�pnie wy�wietla sum� wszystkich wprowadzonych liczb
pozytywnych oraz sum� wszystkich liczb negatywnych, u�ywaj�c p�tli do-while. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba, suma_poz= 0, suma_neg = 0;
    do {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);
        if(liczba > 0){
                suma_poz += liczba;
        }
        else {
            suma_neg += liczba;
        }
    } while(liczba != 0);

    printf("Suma pozytywnych: %d \n", suma_poz);
    printf("Suma negatywnych: %d", suma_neg);
    return 0;
}
