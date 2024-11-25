#include <iostream>
using namespace std;

#define STACK_SIZE 100
struct Stack
{
    struct Node *arr[STACK_SIZE];
    int top;
};
void initStack(Stack &st) { st.top = -1; }
bool empty(Stack st) { return st.top == -1; }
bool full(Stack st) { return st.top == STACK_SIZE - 1; }
void push(Stack &st, struct Node *n)
{
    if (full(st))
    {
        cout << "Stack overflow" << endl;
        return;
    }
    st.arr[++st.top] = n;
}
struct Node *pop(Stack &st)
{
    if (empty(st))
    {
        cout << "Stack underflow" << endl;
        return NULL;
    }
    return st.arr[--st.top];
}
struct Node
{
    int key;
    Node *left, *right;
};

Node *createNode(int x)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->key = x;
    n->left = n->left = NULL;
    return n;
}
// BST insertion
Node *insert(Node *root, int key)
{
    if (root == NULL)
        return createNode(key);
    if (root->key < key)
        root->right = insert(root->right, key);
    else if (root->key < key)
        root->left = insert(root->left, key);
    return root;
}
// inorder
void inorder(Node *root)
{
    Stack st;
    initStack(st);

    Node *curr = root;
    while (!empty(st) || curr != NULL)
    {
        while (curr != NULL)
        {
            push(st, curr);
            curr = curr->left;
        }
        Node *temp = pop(st);
        cout << temp->key << " ";
        curr = temp->right;
    }
}
// preorder
void preorder(Node *root)
{
    Stack st;
    initStack(st);

    Node *curr = root;
    push(st, curr);

    while (!empty(st))
    {
        Node *temp = pop(st);
        cout << temp->key << " ";
        if (temp->right)
            push(st, temp->right);
        if (temp->left)
            push(st, temp->left);
    }
}
// postorder
void postorder(Node *root)
{
    Stack s1;
    Stack s2;
    initStack(s1);
    initStack(s2);

    push(s1, root);
    while (!empty(s1))
    {
        Node *temp = pop(s1);
        push(s1, temp);
        if (temp->left)
            push(s1, temp->left);
        if (temp->right)
            push(s1, temp->right);
    }
    while (!empty(s2))
    {
        Node *t = pop(s2);
        cout << t->key << " ";
    }
}
