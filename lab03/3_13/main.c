/*Napisz program, kt�ry przyjmuje rok jako wej�cie od u�ytkownika i za pomoc� operatora
warunkowego sprawdza, czy jest to rok przest�pny. Program powinien wy�wietla� �Rok
przest�pny� lub �Rok nieprzest�pny� w zale�no�ci od wyniku.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    scanf("%d", &rok);

     printf("%s", ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) ? "Rok przestepny" : "Rok nieprzestepny");

    return 0;
}
