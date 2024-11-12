#include <iostream>
#include <cstring>
using namespace std;

#define MAX_SIZE 100

struct CharStack
{
    int top;
    char data[MAX_SIZE];
};

struct IntStack
{
    int top;
    int data[MAX_SIZE];
};

void initCharStack(CharStack *stack)
{
    stack->top = -1;
}

int isCharStackEmpty(CharStack *stack)
{
    return stack->top == -1;
}

void pushChar(CharStack *stack, char value)
{
    if (stack->top == MAX_SIZE - 1)
    {
        cout << "Stack overflow\n";
        return;
    }
    stack->data[++stack->top] = value;
}

char popChar(CharStack *stack)
{
    if (isCharStackEmpty(stack))
    {
        cout << "Stack underflow\n";
        return '\0';
    }
    return stack->data[stack->top--];
}

char peekChar(CharStack *stack)
{
    if (isCharStackEmpty(stack))
    {
        return '\0';
    }
    return stack->data[stack->top];
}

void initIntStack(IntStack *stack)
{
    stack->top = -1;
}

int isIntStackEmpty(IntStack *stack)
{
    return stack->top == -1;
}

void pushInt(IntStack *stack, int value)
{
    if (stack->top == MAX_SIZE - 1)
    {
        cout << "Stack overflow\n";
        return;
    }
    stack->data[++stack->top] = value;
}

int popInt(IntStack *stack)
{
    if (isIntStackEmpty(stack))
    {
        cout << "Stack underflow\n";
        return -1;
    }
    return stack->data[stack->top--];
}

int precedence(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}

int isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

void infixToPostfix(char infix[], char postfix[])
{
    CharStack stack;
    initCharStack(&stack);
    int j = 0;

    for (int i = 0; i < strlen(infix); i++)
    {
        char ch = infix[i];

        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            pushChar(&stack, ch);
        }
        else if (ch == ')')
        {
            while (!isCharStackEmpty(&stack) && peekChar(&stack) != '(')
            {
                postfix[j++] = popChar(&stack);
            }
            popChar(&stack);
        }
        else if (isOperator(ch))
        {
            while (!isCharStackEmpty(&stack) && precedence(peekChar(&stack)) >= precedence(ch))
            {
                postfix[j++] = popChar(&stack);
            }
            pushChar(&stack, ch);
        }
    }

    while (!isCharStackEmpty(&stack))
    {
        postfix[j++] = popChar(&stack);
    }
}

int evaluatePostfix(char postfix[])
{
    IntStack stack;
    initIntStack(&stack);

    for (int i = 0; i < strlen(postfix); i++)
    {
        char ch = postfix[i];

        if (isdigit(ch))
        {
            pushInt(&stack, ch - '0');
        }
        else if (isOperator(ch))
        {
            int val2 = popInt(&stack);
            int val1 = popInt(&stack);

            switch (ch)
            {
            case '+':
                pushInt(&stack, val1 + val2);
                break;
            case '-':
                pushInt(&stack, val1 - val2);
                break;
            case '*':
                pushInt(&stack, val1 * val2);
                break;
            case '/':
                pushInt(&stack, val1 / val2);
                break;
            case '^':
                pushInt(&stack, val1 ^ val2);
                break;
            }
        }
    }
    return popInt(&stack);
}

int main()
{
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    cout << "Enter an infix expression: ";
    cin >> infix;

    infixToPostfix(infix, postfix);
    cout << "Postfix expression: " << postfix << endl;

    int result = evaluatePostfix(postfix);
    cout << "Result of postfix evaluation: " << result << endl;

    return 0;
}
