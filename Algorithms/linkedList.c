#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

Node *head = NULL;

void insertAtBeginning(int data) {
  Node *newNode = malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

void insertAtEnd(int data) {
  Node *newNode = malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
    return;
  }

  Node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  current->next = newNode;
}

void printLinkedList() {
  Node *current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

int main() {
  insertAtBeginning(10);
  insertAtBeginning(20);
  insertAtEnd(30);

  printLinkedList();

  return 0;
}
