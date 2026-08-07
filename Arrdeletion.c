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

// Delete from beginning
void deleteBeginning() {
    int i;

    if (n == 0) {
        printf("Array is Empty\n");
        return;
    }

    printf("Deleted element: %d\n", arr[0]);

    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
}

// Delete from end
void deleteEnd() {
    if (n == 0) {
        printf("Array is Empty\n");
        return;
    }

    printf("Deleted element: %d\n", arr[n - 1]);
    n--;
}

// Delete from any position
void deletePosition() {
    int i, pos;

    if (n == 0) {
        printf("Array is Empty\n");
        return;
    }

    printf("Enter the position (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid Position\n");
        return;
    }

    printf("Deleted element: %d\n", arr[pos - 1]);

    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
}

int main() {
    int i, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n----- ARRAY DELETION MENU -----\n");
        printf("1. Delete from Beginning\n");
        printf("2. Delete from End\n");
        printf("3. Delete from Any Position\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deleteBeginning();
                break;
            case 2:
                deleteEnd();
                break;
            case 3:
                deletePosition();
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
