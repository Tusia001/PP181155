/* LAB Utw�rz struktur� Student, kt�ra zawiera: firstName (�a�cuch znak�w), lastName (�a�cuch znak�w), id (liczba ca�kowita) oraz gpa (liczba zmiennoprzecinkowa), reprezentuj�c� �redni� ocen studenta. W main stw�rz trzy zmienne w typie Student. Nast�pnie z tych trzech zmiennych stw�rz tablic�. */


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
