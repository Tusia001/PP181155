/* LAB Zaplanuj struktur� Rectangle, maj�c� pola: width (liczba zmiennoprzecinkowa), height (liczba zmiennoprzecinkowa) i color (�a�cuch znak�w), kt�ra ma s�u�y� do przechowywania informacji o wymiarach i kolorze prostok�ta. W main stw�rz 4-elementow� tablic� zmiennych typu Rectangle. */

#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    float width;
    float height;
    char * color;
};

int main()
{
    struct Rectangle tab[] ={
        {4.4, 5.6, "red"},
        {4.4, 5.6, "red"},
        {4.4, 5.6, "red"},
        {4.4, 5.6, "red"}
    };
    return 0;
}
