#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* next;
};
 

void printNode(struct Node* head){
    while(head != NULL){
        printf("%d -> ", head->value);
        head = head->next;
    }
}

int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    head->value = 10;
    head->next = second;

    second->value = 20;
    second->next = third;

    third->value = 30;
    third->next = NULL;

    printNode(head);
}