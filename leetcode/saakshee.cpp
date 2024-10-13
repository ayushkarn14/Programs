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
    push(stack);
    push(stack);
    push(stack);
    display(stack);
    pop(stack);
    display(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    for (int i = 0; i < 100; i++)
    {
        push(stack);
        scanf("%d", &stack[top]);
    }
    return 0;
}