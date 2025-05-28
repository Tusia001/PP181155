/* LAB W main stwórz listê z g³ow¹ o trzech elementach 4,5,-12. Nastêpnie w kolejnych wierszach wyœwietl elementy znajduj¹ce siê na liœcie. */

#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -12;
    list->next->next->next->next = NULL;
    struct element * ptr = list->next;
    while(ptr != NULL){
        printf("%p %d\n", ptr, ptr->x);
        ptr = ptr->next;
    }
    return 0;
}
