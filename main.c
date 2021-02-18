#include <stdio.h>
#include <stdlib.h>

struct Node {
  int valor;
  struct Node *next;
  struct Node *prev;
};

struct List {
  struct Node *head;
  struct Node *tail;
};

void AddToBeginning(struct List *Lista, int NewValue) {
  struct Node *NewNode;
  NewNode = (struct Node *) malloc(sizeof(struct Node));
  NewNode->valor = NewValue;

  if (Lista->head == NULL && Lista->tail == NULL) {
    NewNode->next = NULL;
    NewNode->prev = NULL;
    Lista->head = NewNode;
    Lista->tail = NewNode;
  } else {
    NewNode->next = Lista->head;
    NewNode->prev = NULL;
    Lista->head = NewNode;
  }
}

void AddToEnd(struct List *Lista, int NewValue) {
  struct Node NewNode;
  NewNode.valor = NewValue;

  if (Lista->head == NULL) {
    NewNode.next = NULL;
    NewNode.prev = NULL;
    Lista->head = &NewNode;
    Lista->tail = &NewNode;
  } else {
    NewNode.next = Lista->head;
    NewNode.prev = NULL;
    Lista->tail = &NewNode;
  }
}

//void Print(struct List *Lista) {
//  struct Node *NewNode;
//  NewNode = Lista->head;
//  do {
//    printf("%d", NewNode->valor);
//    NewNode = NewNode->next;
//  } while (NewNode->next != NULL);
//};

// int Find(struct List *Lista, int Value) {
//};

//void Erase(struct List *Lista, int Value) {
//  int valor = 0;
//  for (auto iter = Lista->head; iter != Lista->tail; ++iter) {
//    valor = iter->dato;
//    if (valor <= prev) {
//      iter = NewNode.Erase(iter);
//    }
//    if (valor >= next) {
//      iter = NewNode.Erase(iter);
//    }
//  }
//};

int main() {
  struct List *Lista;
  Lista = (struct List *) malloc(sizeof(struct List));

  AddToBeginning(Lista, 23);
  AddToBeginning(Lista, 34);
  AddToBeginning(Lista, 5);
  AddToBeginning(Lista, 6);
  AddToBeginning(Lista, 78);
  AddToBeginning(Lista, -3);
}