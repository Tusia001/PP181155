/* napisz funkcj�, przyjmuj�c� dwa argumenty: dodatnie liczby za�kowite a i b. Fankcja powinna zwr�ci� 1, je�li reszta z dzielenia liczby a przez 10 jest wi�ksza ni� reszta z dzielenie licbzy b przez 10, i 0 w przeciwnym wypadku, utw�rz przypadek tesktowy tej funkcji. */

#include <stdio.h>
#include <stdlib.h>

int wariant422(int a, int b){
    if (a <= 0 || b <= 0){
        exit(-1);
    }

    if (a%10 > b%10){
        return 1;
    }
    return 0;

}

int main()
{
    //printf("%d", wariant422(-1, 20));
    printf("%d\n", wariant422(48, 21));
    printf("%d\n", wariant422(91, 29));

    return 0;
}
