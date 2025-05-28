/* LAB main stwórz listê bez g³owy o trzech elementach 4,5,-12. Nastêpnie w kolejnych wierszach wyœwietl elementy znajduj¹ce siê na liœcie.  */

#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->x = 4;
    list->next = malloc(sizeof(struct element));
    list->next->x = 5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -12;
    list->next->next->next = NULL;
    struct element * ptr = list;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    return 0;
}
