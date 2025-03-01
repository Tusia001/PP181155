/*Oblicz sqrtx z 3 dla ma³ych wartoœci x np. ||x||< 0.01
 przybli¿aj¹c  sqrtx z 3~~1+ 1/3 x, bez u¿ycia funkcji pierwiastkowania. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x = 0.00003;
    double wynik = 1.0 + (1.0/3.0)*x;
    printf("%.10f", wynik);
    return 0;
}
