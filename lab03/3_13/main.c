/*Napisz program, który przyjmuje rok jako wejœcie od u¿ytkownika i za pomoc¹ operatora
warunkowego sprawdza, czy jest to rok przestêpny. Program powinien wyœwietlaæ “Rok
przestêpny” lub “Rok nieprzestêpny” w zale¿noœci od wyniku.
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
