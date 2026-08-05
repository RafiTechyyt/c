#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int item;

    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        printf("Enter the element: ");
        scanf("%d", &item);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = item;
    }
}
void dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
    } else {
        printf("Deleted element: %d\n", queue[front]);

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}
void display() {
    int i;

    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements are:\n");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
void isEmpty() {
    if (front == -1)
        printf("Queue is Empty\n");
    else
        printf("Queue is Not Empty\n");
}

int main() {
    int choice;

    do {
        printf("\n----- QUEUE MENU -----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Check Empty\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                printf("Program Terminated.\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}
