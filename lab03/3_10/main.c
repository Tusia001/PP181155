/*U�ywaj�c operatora warunkowego ?, napisz program, kt�ry przyjmuje od u�ytkownika jedn� liczb� ca�kowit� i wy�wietla �parzysta� lub �nieparzysta� w zale�no�ci od warto�ci liczby.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    scanf("%d", &a);

    printf((a % 2 == 0) ? "parzysta" : "nieparzysta");


    return 0;
}
