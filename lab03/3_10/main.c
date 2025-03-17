/*U¿ywaj¹c operatora warunkowego ?, napisz program, który przyjmuje od u¿ytkownika jedn¹ liczbê ca³kowit¹ i wyœwietla “parzysta” lub “nieparzysta” w zale¿noœci od wartoœci liczby.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    scanf("%d", &a);

    printf((a % 2 == 0) ? "parzysta" : "nieparzysta");


    return 0;
}
