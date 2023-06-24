#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
    char stack[1000];
    int size;
} stack;

void initialize(stack *stack) {
    stack->size = 1000;
    for (int i = 0; i < stack->size; i++) {
        stack->stack[i] = '\0';
    }
};

void push(stack *stack, char value) {
    for (int i = stack->size - 1; i >= 0; i--) {
        stack->stack[i+1] = stack->stack[i];
    }

    stack->stack[0] = value;
}

char pop(stack *stack) {
    char value = stack->stack[0];

    for (int i = 0; i < stack->size - 1; i++) {
        stack->stack[i] = stack->stack[i + 1];
    }

    return value;
}

void printStack(stack *stack) {
    for (int i = 0; i < stack->size; i++) {
        if (stack->stack[i] != '\0') {
            printf("%c\n", stack->stack[i]);
        }
    }
}

int isPalindrome(char *str) {
    stack s;
    initialize(&s);
    int len = strlen(str);
    int i;

    for (i = 0; i < len / 2; i++) {
        push(&s, str[i]);
    }

    if (len % 2 != 0) {
        i++;
    }

    for (i; i < len; i++) {
        if (pop(&s) != str[i]) {
            return 0;
        }
    }

    return 1;
}


int main() {

    char *string = "yay";

    printf("%d", isPalindrome(string));

}