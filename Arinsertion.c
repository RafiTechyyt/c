#include <stdio.h>

#define MAX 100

int arr[MAX], n;

// Function to display array
void display() {
    int i;
    if (n == 0) {
        printf("Array is Empty\n");
        return;
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Insert at beginning
void insertBeginning() {
    int i, item;

    if (n == MAX) {
        printf("Array is Full\n");
        return;
    }

    printf("Enter the element: ");
    scanf("%d", &item);

    for (i = n; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = item;
    n++;
}

// Insert at end
void insertEnd() {
    int item;

    if (n == MAX) {
        printf("Array is Full\n");
        return;
    }

    printf("Enter the element: ");
    scanf("%d", &item);

    arr[n] = item;
    n++;
}

// Insert at any position
void insertPosition() {
    int i, item, pos;

    if (n == MAX) {
        printf("Array is Full\n");
        return;
    }

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid Position\n");
        return;
    }

    printf("Enter the element: ");
    scanf("%d", &item);

    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = item;
    n++;
}

int main() {
    int i, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n----- ARRAY INSERTION MENU -----\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Any Position\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertBeginning();
                break;
            case 2:
                insertEnd();
                break;
            case 3:
                insertPosition();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Program Terminated.\n");
                break;
            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 5);

    return 0;
}
