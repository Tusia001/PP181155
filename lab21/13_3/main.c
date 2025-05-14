/* LAB Zaplanuj strukturê Rectangle, maj¹c¹ pola: width (liczba zmiennoprzecinkowa), height (liczba zmiennoprzecinkowa) i color (³añcuch znaków), która ma s³u¿yæ do przechowywania informacji o wymiarach i kolorze prostok¹ta. W main stwórz 4-elementow¹ tablicê zmiennych typu Rectangle. */

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
