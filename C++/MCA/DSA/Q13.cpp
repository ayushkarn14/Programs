#include <iostream>
using namespace std;
struct Node
{
    int key;
    struct Node *left, *right;
};

struct Node *createNode(int n)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->key = n;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node *insert(Node *root, int key)
{
    if (root == NULL)
        return createNode(key);

    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);

    return root;
}

struct Node *deleteNode(struct Node *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            delete root;
            return temp;
        }

        Node *curr = root->right;
        while (curr && curr->left != NULL)
            curr = curr->left;

        root->key = curr->key;
        root->right = deleteNode(root->right, curr->key);
    }
    return root;
}

struct Node *search(struct Node *root, int key)
{
    if (root == NULL || root->key == key)
        return root;

    if (root->key < key)
        return search(root->right, key);

    return search(root->left, key);
}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

void preorder(struct Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

int main()
{
    struct Node *root = NULL;
    int ch, key;

    do
    {
        cout << "Binary Search Tree Operations:\n";
        cout << "1. Insert\n2. Delete\n3. Search\n4. Inorder Traversal\n5. Preorder Traversal\n6. Postorder Traversal\n-1. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter key to insert: ";
            cin >> key;
            root = insert(root, key);
            break;
        case 2:
            cout << "Enter key to delete: ";
            cin >> key;
            root = deleteNode(root, key);
            break;
        case 3:
            cout << "Enter key to search: ";
            cin >> key;
            if (search(root, key) != NULL)
                cout << key << " found in the BST.\n";
            else
                cout << key << " not found in the BST.\n";
            break;
        case 4:
            cout << "Inorder Traversal: ";
            inorder(root);
            cout << endl;
            break;
        case 5:
            cout << "Preorder Traversal: ";
            preorder(root);
            cout << endl;
            break;
        case 6:
            cout << "Postorder Traversal: ";
            postorder(root);
            cout << endl;
            break;
        case -1:
            cout << "Exiting\n";
            break;
        default:
            cout << "Invalid choice. \n";
        }
    } while (ch != -1);

    return 0;
}
