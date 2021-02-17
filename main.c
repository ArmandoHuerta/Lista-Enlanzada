#include <stdio.h>

struct Node {
    int valor;
    struct Node *next;
    struct Node *prev;
};

struct List {
    struct Node *head;
    struct Node *tail;
};

void AddToBeginning(struct List &Lista, int NewValue) {
    struct Node NewNode;
    NewNode.valor = NewValue;

    if (Lista.head == NULL) {
        NewNode.next = NULL;
        NewNode.prev = NULL;
        Lista.head = &NewNode;
    } else {
        NewNode.next = Lista.head;
        NewNode.prev = NULL;
        Lista.head = &NewNode;
    }

};

//void AddToEnd(struct List Lista, int NewValue) {


//};

void Print(struct List Lista) {
    struct Node *NewNode;
    NewNode = Lista.head;
    do {


        printf("%d", NewNode->valor);
        NewNode = NewNode->next;

    } while (NewNode-> next != NULL);


 
};
//
//int Find(struct List Lista, int Value) {
//
//};
//
//void Erase(struct List Lista, int Value) {
//
//};


int main() {
    struct List* Lista;
    AddToBeginning(Lista,10);


}