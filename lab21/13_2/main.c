/*Utwórz strukturê Student, która zawiera: firstName (³añcuch znaków), lastName (³añcuch znaków), id (liczba ca³kowita) oraz gpa (liczba zmiennoprzecinkowa), reprezentuj¹c¹ œredni¹ ocen studenta. W main stwórz trzy zmienne w typie Student. Nastêpnie z tych trzech zmiennych stwórz tablicê. */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char *firstName;
    int id;
    float gpa;
};

int main()
{
    struct Student student1 = {"Marta", 181155, 4.20};
    struct Student student2 = {"Piotr", 181325, 4.80};
    struct Student student3 = {"Tomasz", 171155, 3.23};

    return 0;
}
