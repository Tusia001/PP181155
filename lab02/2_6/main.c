#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 1, b = 2, c = 4;
    int wynik =  (int)pow(a, 2.0) + (int) pow(b, 2.0) + (int) pow(c, 2.0);
    printf("%d", wynik);
    return 0;
}
