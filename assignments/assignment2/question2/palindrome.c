#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    char stack[1000];
    int size;
} stack;

void initialize(stack *stack) {

};

void push(stack *stack, char value) {

}

char pop(stack *stack) {
    char value = stack->stack[0];

    for (int i = stack->size; i > 0; i--) {
        
    }
}

int isPalindrome(char *str) {
    struct stack s;
    initialize(&s);
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        push(str[i]);
    }

    for (int j = 0; j < len; j++) {
        if (pop() != str[j]) {
            return 0;
        }
    }

    return 1;
}


int main() {

}