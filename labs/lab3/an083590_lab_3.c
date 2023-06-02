#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int data;
  struct node *next;
} node;
void markEven(node *head) {
  //make temporary node to traverse the linked list
  node *tempNode = head;

  //while loop to iterate through linked list and move tempNode to next until tempNode is NULL
  while (tempNode != NULL) {

    //check if tempNode value is divisible by 2
    if (tempNode->data % 2 == 0) {
      //allocate memory to the new node
      node *add = malloc(sizeof(node));

      //set data of new node to -1
      add->data = -1;
      //set next value of new node to the tempNode next value
      add->next = tempNode->next;
      //set tempNode next value to the new node
      tempNode->next = add;

      //go to the next value of the linked list, can go to add->next because we already know the -1 value is not divisble by 2
      tempNode = add->next;
    } else {
      //go to the next value of the linked list
      tempNode = tempNode->next;
    }

    

  }
}
void deallocateList(node **head) {
  node *tmp = *head;
  while (tmp != NULL) {
    *head = tmp->next;
    free(tmp);
    tmp = *head;
  }
  *head = NULL;
}
int insertList(node **head, int data) {
  node *newNode = (node *)malloc(sizeof(node));
  if (newNode == NULL)
    return -1;
  newNode->data = data;
  newNode->next = NULL;
  newNode->next = *head;
  *head = newNode;
  return 1;
}
void printList(node *head) {
  node *tmp = head;
  while (tmp != NULL) {
    printf("%d", tmp->data);
    if (tmp->next != NULL) {
      printf(", ");
    } else {
      printf(".\n");
    }
    tmp = tmp->next;
  }
}
int main(void) {
  node *head = NULL;
  insertList(&head, 8);
  insertList(&head, 3);
  insertList(&head, 1);
  insertList(&head, 7);
  insertList(&head, 6);
  insertList(&head, 2);
  printf("Initial List:\n");
  printList(head);
  markEven(head);
  printf("Marked List:\n");
  printList(head);
  deallocateList(&head);
}