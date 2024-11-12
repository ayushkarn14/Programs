#include <iostream>
using namespace std;

struct Node
{
    int key;
    struct Node *left, *right;
};

struct Node *createNode(int key)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->key = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct StackNode
{
    Node *treeNode;
    StackNode *next;
};

struct StackNode *createStackNode(Node *node)
{
    StackNode *stackNode = (StackNode *)malloc(sizeof(StackNode));
    stackNode->treeNode = node;
    stackNode->next = NULL;
    return stackNode;
}

int isStackEmpty(StackNode *top)
{
    return top == NULL;
}

void push(StackNode **top, Node *node)
{
    StackNode *stackNode = createStackNode(node);
    stackNode->next = *top;
    *top = stackNode;
}

struct Node *pop(StackNode **top)
{
    if (isStackEmpty(*top))
    {
        return NULL;
    }
    StackNode *temp = *top;
    *top = (*top)->next;
    Node *poppedNode = temp->treeNode;
    free(temp);
    return poppedNode;
}

Node *insert(Node *root, int key)
{
    if (root == NULL)
        return createNode(key);
    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    return root;
}

void inorderTraversal(Node *root)
{
    StackNode *stack = NULL;
    Node *current = root;
    cout << "Inorder Traversal: ";
    while (current != NULL || !isStackEmpty(stack))
    {
        while (current != NULL)
        {
            push(&stack, current);
            current = current->left;
        }
        current = pop(&stack);
        cout << current->key << " ";
        current = current->right;
    }
    cout << "\n";
}

void preorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    StackNode *stack = NULL;
    push(&stack, root);
    cout << "Preorder Traversal: ";
    while (!isStackEmpty(stack))
    {
        struct Node *node = pop(&stack);
        cout << node->key << " ";
        if (node->right)
            push(&stack, node->right);
        if (node->left)
            push(&stack, node->left);
    }
    cout << "\n";
}

void postorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    StackNode *s1 = NULL;
    StackNode *s2 = NULL;
    push(&s1, root);
    cout << "Postorder Traversal: ";
    while (!isStackEmpty(s1))
    {
        Node *node = pop(&s1);
        push(&s2, node);
        if (node->left)
            push(&s1, node->left);
        if (node->right)
            push(&s1, node->right);
    }
    while (!isStackEmpty(s2))
    {
        cout << pop(&s2)->key << " ";
    }
    cout << "\n";
}

int main()
{
    Node *root = NULL;
    int ch, key;
    cout << "Enter number of elements to insert" << endl;
    int num;
    cin >> num;
    cout << "Enter " << num << " elements" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> key;
        root = insert(root, key);
    }
    do
    {
        cout << "BST Operations:\n1. Inorder Traversal\n2. Preorder Traversal\n3. Postorder Traversal\n-1. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            inorderTraversal(root);
            break;
        case 2:
            preorderTraversal(root);
            break;
        case 3:
            postorderTraversal(root);
            break;
        case -1:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (ch != -1);

    return 0;
}
