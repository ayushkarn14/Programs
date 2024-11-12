#include <iostream>
using namespace std;
#define MAX_SIZE 10

struct Stack
{
    int top;
    int data[MAX_SIZE];
};

void initStack(Stack *stack)
{
    stack->top = -1;
}

int isFull(Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, int value)
{
    if (isFull(stack))
    {
        cout << "Stack overflow!" << endl;
        return;
    }
    stack->data[++stack->top] = value;
    cout << "Pushed " << value << endl;
}

int pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        cout << "Stack underflow!" << endl;
        return -1; // Indicate error
    }
    int value = stack->data[stack->top--];
    cout << "Popped " << value << endl;
    return value;
}

void display(Stack *stack)
{
    if (isEmpty(stack))
    {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Stack elements: ";
    for (int i = stack->top; i >= 0; i--)
    {
        cout << stack->data[i] << " ";
    }
    cout << endl;
}

int main()
{
    Stack stack;
    initStack(&stack);

    int ch, value;

    while (1)
    {
        cout << "\nChoose an operation:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Check if Full\n";
        cout << "4. Check if Empty\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            push(&stack, value);
            break;
        case 2:
            pop(&stack);
            break;
        case 3:
            if (isFull(&stack))
            {
                cout << "The stack is full.\n";
            }
            else
            {
                cout << "The stack is not full.\n";
            }
            break;
        case 4:
            if (isEmpty(&stack))
            {
                cout << "The stack is empty.\n";
            }
            else
            {
                cout << "The stack is not empty.\n";
            }
            break;
        case 5:
            display(&stack);
            break;
        case 6:
            cout << "Exiting\n";
            exit(0);
        default:
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}