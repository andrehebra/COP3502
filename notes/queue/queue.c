#include <stdio.h>
#include <stdlib.h>

typedef struct item {
    int data;
    struct item* next;
} item;

void enQueue(item **head, int data) {

    item *tempPtr = *head;

    item *add = malloc(sizeof(item));
    add->data = data;
    add->next = NULL;

    if (head == NULL) {
        *head = add;
    }

    while (tempPtr->next != NULL) {
        tempPtr = tempPtr->next;
    }

    tempPtr->next = add;

}

int main() {

    item *head = NULL;
    

    for (int i = 0; i < 5; i++) {
        enQueue(&head, i);
    }
    

    return 0;
}