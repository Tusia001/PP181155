/*Wylicz wartoœæ e^x, dla ma³ych wartoœci x np. ||x||<0,01
 przybli¿aj¹c e^x, jako 1 + x , bez u¿ycia funkcji eksponencjalnych. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x = 0.0003;
    double wynik = 1 + x;
    printf("%.10f", wynik);
    return 0;
}
