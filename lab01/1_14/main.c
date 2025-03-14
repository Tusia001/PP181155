/*Znajdü przyk≥ad i wyúwietl na standardowym wyjúciu, kiedy dodawanie liczb zmiennoprzecinowych nie jest ≥πczne.*/

#include <stdio.h>

int main() {
    double a = 1.0e16;
    double b = -1.0e16;
    double c = 1.0;

    double wynik1 = (a + b) + c;
    double wynik2 = a + (b + c);


    printf("(a + b) + c = (%.1e + %.1e) + %.1f = %.1f\n", a, b, c, wynik1);
    printf("a + (b + c) = %.1e + (%.1e + %.1f) = %.1f\n", a, b, c, wynik2);
    return 0;
}
