/*U�ywaj�c operatora warunkowego, napisz program, kt�ry prosi u�ytkownika o wprowadzenie oceny w skali od 0 do 100 i wy�wietla �Zdane�, je�li ocena jest wi�ksza lub r�wna
51, lub �Nie zdane� w przeciwnym przypadku */
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
