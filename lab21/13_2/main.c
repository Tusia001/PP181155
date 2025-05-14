/* LAB Utwórz strukturê Student, która zawiera: firstName (³añcuch znaków), lastName (³añcuch znaków), id (liczba ca³kowita) oraz gpa (liczba zmiennoprzecinkowa), reprezentuj¹c¹ œredni¹ ocen studenta. W main stwórz trzy zmienne w typie Student. Nastêpnie z tych trzech zmiennych stwórz tablicê. */


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * firstName;
    char * lastName;
    int id;
    float gpa;
} Student;

int main()
{
    Student s1 = {"Marta", "Szczepanska", 45, 4.1};
    Student s2 = {"Tomasz", "gg", 98, 2.3};
    Student s3 = {"Adam", "kk", 67, 4.2};

    int tablica[3] = {4,5,6};
    Student tab[] = {s1,s2,s3};

    for(int i=0;i<3;i++){
        printf("First and last name:%s %s, id:%d, gpa:%f.\n",
               tab[i].firstName, tab[i].lastName, tab[i].id, tab[i].gpa);
    }
    return 0;
}
