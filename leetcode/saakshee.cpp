#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int *stack)
{
    int x;
    printf("Enter the data: ");
    scanf("%d", &x);
    if (top == MAX - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        stack[++top] = x;
    }
}

void pop(int *stack)
{
    int item;
    if (top == -1)
    {
        printf("Stack is empty (underflow)\n");
    }
    else
    {
        item = stack[top--];
        printf("Popped item is: %d\n", item);
    }
}

void display(int *stack)
{
    int i;
    printf("Stack elements: ");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("Stack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push(stack);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            display(stack);
            break;
        case 4:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}