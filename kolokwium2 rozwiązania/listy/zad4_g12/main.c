//4. Napisz funkcję printDoubled, która przyjmuje jako argument listę z głową o elementach typu:struct elem {int i;struct elem * next;};2Funkcja ma wyświetlić elementy listy pomnożone przez 2. Stwórz przypadek testowy. Przykład: dlalisty zawierającej elementy: 4,-5,3,0,2 mają być wyświetlone elementy: 8,-10,6,0,4.Wskazówka: lista z głową to konstrukcja, w której na początku znajduje się struktura (tzw. głowa)z niezainicjowaną wartością. Pusta lista z głową zawiera samą jedną strukturę, której następnik jestNULL. Przyjmuje się, że głowa zawsze istnieje, więc nie trzeba sprawdzać czy jest NULLem. Jeśli listaz głową ma 𝑛 elementów, to do jej stworzenia potrzeba 𝑛 + 1 struktur.Punktacja: 24 pkt.//
#include <stdio.h>
#include <stdlib.h>
struct elem {
    int i;
    struct elem *next;
};
void printDoubled(struct elem *list) {
    if (list->next == NULL) {
        printf("Empty list\n");
        return;
    }
    struct elem *ptr = list->next;
    while (ptr != NULL) {
        printf("%d\n", ptr->i * 2);
        ptr = ptr->next;
    }
}
int main() {
    struct elem *list = malloc(sizeof(struct elem));
    list->next = malloc(sizeof(struct elem));
    list->next->i = 4;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->i = -5;
    list->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->i = 3;
    list->next->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->next->i = 0;
    list->next->next->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->next->next->i = 2;
    list->next->next->next->next->next->next = NULL;
    printDoubled(list);
    return 0;
}
