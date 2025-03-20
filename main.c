#include <stdio.h>
#include "stack.h"
#include "dectoBinary.h"

int main() {
    int decimal;
    stack *wadah = NULL;
    printf("Masukkan bilangan decimal: ");
    scanf("%d", &decimal);

    decimaltoBinary(&wadah,decimal);

    while(wadah != NULL){
        pop(&wadah);
    }

    return 0;
}