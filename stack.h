#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int bin;
    struct node * nextbin;
} stack;

void push(stack **n, int value);

void isEmpty(stack *n);

void pop(stack **n);

void peek(stack *n);
#endif