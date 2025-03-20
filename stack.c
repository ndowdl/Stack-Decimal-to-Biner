#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int bin;
    struct node *nextbin;
} stack;

struct node* initializeStack(int binary) {
    struct node * new = (struct node*)malloc(sizeof(struct node));
    if(new == NULL) {
        printf("Alokasi memori gagal!");
        exit(1);
    }
    new->bin = binary;
    new->nextbin = NULL;
    return new;
}

int isEmpty(stack *n){
    if(n != NULL){
        return 0;
    } else {
        return 1;
    }
}

void push(stack **n, int value) {
    struct node* push = initializeStack(value);
    struct node* temp = *n;

    if(isEmpty(*n) == 1){
        *n = push;
        return;
    }

    push->nextbin = temp->nextbin;
    temp->nextbin = push;
}

void pop(stack **n) {
    if (isEmpty(*n) == 1){
        printf("Tidak ada yang bisa di pop");
        exit(1);
    }

    printf("Popping: %d\n", (*n)->bin);
    
    stack * temp = *n;
    *n = (*n)->nextbin;
    free(temp); 
}

void peek (stack *n) {
    while(n != NULL){
        printf("%d", n->bin);
        n = n->nextbin;
    }
}