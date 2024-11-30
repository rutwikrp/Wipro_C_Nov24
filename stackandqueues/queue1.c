#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
    int items[MAX];
    int front;
    int rear;
} Queue;

// Initialize the queue
void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(Queue *q) {
    return q->rear == MAX - 1;
}

// Check if the queue is empty
int isEmpty(Queue *q) {
    return q->front == -1 || q->front > q->rear;
}
// Enqueue operation
void enqueue(Queue *q, int value) {
    if (q->rear == MAX - 1) {
        printf("Queue is full! Cannot add %d.\n", value);
        return;
    }
    if (q->front == -1) {
        q->front = 0;  // Initialize front if first element
    }
    q->rear++;
    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}

// Dequeue operation
int dequeue(Queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }
    int value = q->items[q->front];
    q->front++;
    if (q->front > q->rear) {
        initializeQueue(q);  // Reset the queue if empty
    }
    printf("Dequeued: %d\n", value);
    return value;
}

// Display the queue
void displayQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

// Main function to demonstrate the queue
int main() {
    int size = 0,choice = 0, sp = -1;;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    // Queue q;

    double *q = (double *)malloc(sizeof(double) * size);
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    displayQueue(&q);

    dequeue(&q);
    displayQueue(&q);

    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60); 
    displayQueue(&q);

    do
    {
        printf("\n1:Push 2:Pop 3:Top 4:DisplayStack 5:Exit. Your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            sp = push(q, sp, size);
            break;
        case 2:
            sp = pop(q, sp);
            break;
        case 3:
            top(q, sp);
            break;
        case 4:
            displayStack(q, sp);
            break;
        case 5:
            choice = 0;
            break;
        default:
            puts("Invalid Input entered");
        }
    } while (choice != 0);
    free(q); // deallocate memory
    q = NULL;
    // Note that q pointer is now a Dangling Pointer
    puts("End of Program");

    return 0;
}
