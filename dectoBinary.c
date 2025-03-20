#include "stack.h"

void decimaltoBinary(stack **n, int decimal) {

    while(decimal != 0) {
        push(n , decimal%2);
        decimal = decimal/2;
    }
    printf("Bilangan biner: ");
    peek(*n);
    printf("\n");
}