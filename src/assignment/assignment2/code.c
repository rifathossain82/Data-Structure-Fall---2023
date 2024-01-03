#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Node{
    int value;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void printNode(){
    struct Node *temp;
    temp = head;
    while (temp != NULL){
        printf("%d\t", temp->value);
        temp = temp->next;
    }
    printf("\n");
}


// Task One
void firstAdd(int value){
    struct Node *n = (struct Node *)malloc(sizeof(n));
    n->value = value;
    n->next = NULL;
    head = n;
    tail = n;
}


void addNode(int value){
    struct Node *n = (struct Node *)malloc(sizeof(n));
    n->value = value;
    n->next = NULL;
    tail->next = n;
    tail = n;
}


// Task Two
void addNodeAfterValue(int nValue, int value){
    struct Node *n = (struct Node *)malloc(sizeof(n));
    n->value = nValue;
    n->next = NULL;
    struct Node *changes;
    struct Node *temp;
    temp = head;
    while (temp != NULL){
        if (temp->value == value)
            changes = temp;
        break;
    }
    n->next = changes->next;
    changes->next = n;
}


void deleteNodeAfterValue(int value){
    struct Node *changes;
    struct Node *temp;
    temp = head;
    while (temp != NULL){
        if (temp->next->value == value)
            changes = temp;
        break;
    }
    changes->next = changes->next->next;
}


// Task Three
void reverceList(){
    struct Node *current = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    while (current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}


// Task Four
void checkCycle(){
    int isCycle = 0;
    struct Node *temp;
    temp = head;
    while (temp != NULL){
        if (temp->next == head){
            isCycle = 1;
            break;
        }
        temp = temp->next;
    }

    if (isCycle){
        printf("YES");
    } else{
        printf("NO");
    }

    printf("\n");
}


// Task Five
void merging(){
    struct Node *a1 = (struct Node *)malloc(sizeof(a1));
    a1->value = 10;
    a1->next = NULL;

    struct Node *a = (struct Node *)malloc(sizeof(a));
    a->value = 5;
    a->next = a1;

    struct Node *b1 = (struct Node *)malloc(sizeof(b1));
    b1->value = 12;
    b1->next = NULL;

    struct Node *b = (struct Node *)malloc(sizeof(b));
    b->value = 7;
    b->next = b1;

    struct Node head;
    struct Node *tail = &head;
    head.next = NULL;
    while (1){
        if (a == NULL){
            tail->next = b;
            break;
        }

        if (b == NULL){
            tail->next = a;
            break;
        }

        if (a->value <= b->value){
            tail->next = a;
            a = a->next;
        } else{
            tail->next = b;
            b = b->next;
        }

        tail = tail->next;
    }

    struct Node *temp;
    temp = head.next;
    while (temp != NULL){
        printf("%d\t", temp->value);
        temp = temp->next;
    }

    printf("\n");
}


int main(){
    // Task One
    firstAdd(5);
    addNode(10);
    addNode(15);
    printNode();

    // Task Two
    addNodeAfterValue(7, 5);
    printNode();
    deleteNodeAfterValue(7);
    printNode();

    // Task Three
    reverceList();
    printNode();

    // Task Four
    checkCycle();

    // Task Five
    merging();
    return 0;
};