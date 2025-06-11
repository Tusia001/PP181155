//4. Napisz funkcję printDoubled, która przyjmuje jako argument listę bez głowy o elementachtypu:struct elem {int a;struct elem * next;};Funkcja ma wyświetlić elementy listy pomnożone przez 2. Stwórz przypadek testowy. Przykład: dlalisty zawierającej elementy: 4,-5,3,0,2 mają być wyświetlone elementy: 8,-10,6,0,4.Wskazówka: lista bez głowy to konstrukcja, w elementy znajdują się od samego początku listy. Jeślilista bez głowy ma 𝑛 elementów, to do jej stworzenia potrzeba 𝑛 struktur. Pusta lista bez głowy toNULL//

#include <stdio.h>
#include <stdlib.h>

struct elem{
    int a;
    struct elem*next;
};

void printDoubled(struct elem *list) {
    struct elem *ptr = list;
    while (ptr != NULL) {
        printf("%d\n", ptr->a * 2);
        ptr = ptr->next;
    }
}

int main() {
    struct elem *list = malloc(sizeof(struct elem));
    list->a = 4;
    list->next = malloc(sizeof(struct elem));
    list->next->a = -5;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->a = 3;
    list->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->a = 0;
    list->next->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->next->a = 2;
    list->next->next->next->next->next = NULL;

    printDoubled(list);
    return 0;
}


