/*U¿ywaj¹c operatora warunkowego, napisz program, który prosi u¿ytkownika o wprowadzenie oceny w skali od 0 do 100 i wyœwietla “Zdane”, jeœli ocena jest wiêksza lub równa
51, lub “Nie zdane” w przeciwnym przypadku */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    printf("podaj ocene w skali 0-100: ");
    scanf("%d", &liczba);

    printf((liczba < 51) ? "Nie zdane" : "Zdane");
    return 0;
}
