// Tree is a non linear data structure
// It is like a linked list and stuff

// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->right = null;
//         this->left = null;
//     }
// };

// node *buildtree(node *root)
// {
//     int data;
//     cout << "enter the data : ";
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//         return null;

//     cout << "enter data for intesting in the left of " << data << endl;
//     root->left = buildtree(root->left);
//     cout << "enter data for inseting in right of " << data << endl;
//     root->right = buildtree(root->right);
//     return root;
// }

// void levelordertraveral(){

// }

// int main()
// {
//     node *root = new node(10);
//     cout << root->data << endl;
//     root = buildtree(root);

//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *buildTree(Node *root)
// {
//     int data;
//     cout << "Enter the data : ";
//     cin >> data;
//     root = new Node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << "Enter data for inserting in left of " << data << endl;
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right of " << data << endl;
//     root->right = buildTree(root->right);
//     return root;
// }

// void levelOrderTraveral(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         if (q.front() == NULL)
//         {
//             q.pop();
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }

//         }
//         else
//         {
//             cout << temp->data << " ";
//             q.pop();
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }

//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// // void levelOrderTraveral(Node *root)
// // {
// //     queue<Node *> q;
// //     int num = 1;
// //     q.push(root);
// //     q.push(NULL);
// //     while (!q.empty())
// //     {
// //         Node *temp = q.front();
// //         q.pop();

// //         if (temp == NULL)
// //         {
// //             cout << num++;
// //             cout << endl;

// //             if (!q.empty())
// //             {
// //                 q.push(NULL);
// //             }
// //         }
// //         else
// //         {
// //             cout << temp->data << " ";
// //             if (temp->left)
// //             {
// //                 q.push(temp->left);
// //             }
// //             if (temp->right)
// //             {
// //                 q.push(temp->right);
// //             }
// //         }
// //     }
// // }

// int main()
// {
//     Node *root = NULL;
//     root = buildTree(root);
//     cout << endl;
//     levelOrderTraveral(root);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 0; i < 11; i++)
//     {
//         cout << "Sahith" << i << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    int data;
    cout << "Enter the data: ";
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the value left of " << root->data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the value right of " << root->data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraveral(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        if (q.front() == NULL)
        {
            cout << endl;
            q.pop();

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            root = q.front();
            cout << q.front()->data << " ";
            q.pop();
            if (root->left != NULL)
            {
                q.push(root->left);
            }

            if (root->right != NULL)
            {
                q.push(root->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << endl;
    levelOrderTraveral(root);
    return 0;
}