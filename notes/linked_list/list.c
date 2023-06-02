#include <stdio.h>

struct node {
    int value;
    struct node* next;
};

void insertAtBeginning(int value, struct node *phead) {

    struct node *newNode;

    newNode->value = value;
    newNode->next = phead;
    phead = newNode;

}

void delete() {

}

void display(struct node *phead) {

    struct node *currentNode;

    while (currentNode->next != NULL) {
        printf("%d\n", currentNode->value);
        currentNode = currentNode->next;
    }

}

void search() {

}

int main() {
    struct node *phead = NULL;

    insertAtBeginning(3,phead);
    insertAtBeginning(2,phead);
    insertAtBeginning(1,phead);
    insertAtBeginning(0,phead);
    insertAtBeginning(5,phead);

    display(phead);

    return 0;
}