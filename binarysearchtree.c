#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;

Node *root = NULL;

Node *createnode(int item)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = item;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void infix(Node *r)
{
    if (r == NULL)
    {
        return;
    }
    infix(r->left);
    printf("%d ", r->data);
    infix(r->right);
}
void postfix(Node *r)
{
    if (r == NULL)
    {
        return;
    }
    postfix(r->left);
    postfix(r->right);
    printf("%d ", r->data);
}
void prefix(Node *r)
{
    if (r == NULL)
    {
        return;
    }
    printf("%d ", r->data);
    prefix(r->left);
    prefix(r->right);
}

Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        return createnode(data);
    }
    else if (root->data <= data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
    return root;
}

Node *minvalue(Node *r)
{
    if (r == NULL || r->left == NULL)
        return r;
    else
    {
        return minvalue(r->left);
    }
}

Node *delete(Node *r, int data)
{
    if (r == NULL)
    {
        return r;
    }
    if (data < r->data)
    {
        r->left = delete (r->left, data);
    }
    else if (data > r->data)
    {
        r->right = delete (r->right, data);
    }
    else
    {
        Node *temp = r;
        Node *copy;
        if (r->left == NULL)
        {
            copy = r->right;
            free(temp);
            return copy;
        }
        else if (r->right == NULL)
        {
            copy = r->left;
            free(temp);
            return copy;
        }
        else
        {
            r->data = minvalue(r->right)->data;
            r->right = delete (r->right, r->data);
        }
    }
    return r;
}

// void insert(int data)
//{
//     Node* newnode=createnode(data);
//     if(root==NULL)
//     {
//         root=newnode;
//         return;
//     }
//     Node* temp= root;
//     while(temp!=NULL)
//     {
//         if(data<temp->data)
//         {
//             if(temp->left==NULL)
//             {
//                 temp->left=newnode;
//                 return;
//             }
//             else
//             {
//                 temp=temp->left;
//             }
//         }
//         else
//         {
//             if(temp->right==NULL)
//             {
//                 temp->right=newnode;
//                 return;
//             }
//             else
//             {
//                 temp=temp->right;
//             }
//         }
//     }
// }

int search(Node *r, int data)
{
    if (r == NULL)
        return 0;
    if (r->data == data)
    {
        return 1;
    }
    else if (r->data <= data)
    {
        return search(r->right, data);
    }
    else
    {
        return search(r->left, data);
    }
}

int main()
{
    int choice, val;
    while (1)
    {
        printf("Menu\n1. Insert\n2. Display Prefix\n3. Display Infix\n4. Display Postfix\n5. delete a node\n6. Search a node\n7. Exit\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to insert : ");
            scanf("%d", &val);
            root = insert(root, val);
            break;
        case 2:
            prefix(root);
            printf("\n");
            break;
        case 3:
            infix(root);
            printf("\n");
            break;
        case 4:
            postfix(root);
            printf("\n");
            break;
        case 5:
            printf("Enter value to delete : ");
            scanf("%d", &val);
            root = delete (root, val);
            break;
        case 6:
            printf("Enter value to search : ");
            scanf("%d", &val);
            printf("The value is %s\n", search(root, val) ? "Present" : "Absent");
            break;
        case 7:
            printf("End of Program\n");
            return 0;
        default:
            printf("Invalid input");
        }
    }
    return 0;
}