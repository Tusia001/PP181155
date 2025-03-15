/*Napisz program, który przyjmuje od u¿ytkownika trzy liczby zmiennoprzecinkowe a, b, c. Potrakuj je jako wspó³czynniki równania kwadratowego ax^2 + bx + c = 0
. Na standardowym wyjœciu wypisz wszystkie warianty rozwi¹zañ tego równania. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;
    scanf("%f" "%f" "%f", &a, &b, &c);

    delta = b*b - 4*a*c;

    if (a == 0) {
        printf("Brak rozwiazan");
        return 0;
    }

      if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Dwa rozwiazania: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Jedno rozwiazanie: x = %.2f\n", x1);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-delta) / (2 * a);
        printf("Brak rozwiazan rzeczywistych.\n");
        printf("Rozwiazania zespolone: x1 = %.2f - %.2fi, x2 = %.2f + %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
