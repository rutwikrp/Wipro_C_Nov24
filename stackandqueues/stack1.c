#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct {
    int items[MAX];
    int top;
} Stack;

// Initialize the stack
void initializeStack(Stack *s) {
    s->top = -1;
}

// Check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Push operation
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack is full! Cannot push %d.\n", value);
        return;
    }
    s->items[++(s->top)] = value;
    printf("Pushed: %d\n", value);
}

// Pop operation
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Cannot pop.\n");
        return -1;
    }
    int value = s->items[(s->top)--];
    printf("Popped: %d\n", value);
    return value;
}

// Peek operation
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Cannot peek.\n");
        return -1;
    }
    return s->items[s->top];
}

// Display the stack
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// Main function
int main(int argc, char *argv[]) {
    Stack s;
    initializeStack(&s);

    if (argc < 2) {
        printf("Usage: %s <elements to push onto the stack>\n", argv[0]);
        return 1;
    }

    // Push elements from command-line arguments
    for (int i = 1; i < argc; i++) {
        int value = atoi(argv[i]); // Convert string to integer
        push(&s, value);
    }

    // Display stack after all inputs
    display(&s);

    // Perform a pop operation
    pop(&s);
    display(&s);

    // Peek at the top element
    printf("Top element: %d\n", peek(&s));

    return 0;
}
