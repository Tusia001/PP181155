/* napisz funkcjê, przyjmuj¹c¹ dwa argumenty: dodatnie liczby za³kowite a i b. Fankcja powinna zwróciæ 1, jeœli reszta z dzielenia liczby a przez 10 jest wiêksza ni¿ reszta z dzielenie licbzy b przez 10, i 0 w przeciwnym wypadku, utwórz przypadek tesktowy tej funkcji. */

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
