#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *top = NULL, *temp;
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {  // Push
            printf("Enter value to push: ");
            scanf("%d", &value);

            temp = (struct Node *)malloc(sizeof(struct Node));
            temp->data = value;
            temp->next = top;
            top = temp;

            printf("%d pushed to stack\n", value);
        } 
        else if (choice == 2) {  // Pop
            if (top == NULL) {
                printf("Stack is empty! Cannot pop.\n");
            } else {
                temp = top;
                printf("%d popped from stack\n", top->data);
                top = top->next;
                free(temp);
            }
        } 
        else if (choice == 3) {  // Display
            if (top == NULL) {
                printf("Stack is empty!\n");
            } else {
                temp = top;
                printf("Stack elements:\n");
                while (temp != NULL) {
                    printf("%d\n", temp->data);
                    temp = temp->next;
                }
            }
        } 
        else if (choice == 4) {  // Exit
            printf("Exiting...\n");
            break;
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
