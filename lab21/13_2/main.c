/*Utw�rz struktur� Student, kt�ra zawiera: firstName (�a�cuch znak�w), lastName (�a�cuch znak�w), id (liczba ca�kowita) oraz gpa (liczba zmiennoprzecinkowa), reprezentuj�c� �redni� ocen studenta. W main stw�rz trzy zmienne w typie Student. Nast�pnie z tych trzech zmiennych stw�rz tablic�. */

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
