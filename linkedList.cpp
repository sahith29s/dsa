#include <iostream>
#include <map>
#include <string>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtTail(Node *&tail, int data)
{

    Node *temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertAtPosi(Node *head, int posi, int data)
{
    Node *temp = new Node(data);
    int i = 1;
    while (i < posi - 1)
    {
        head = head->next;
        i++;
    }
    Node *k = head->next;

    head->next = temp;
    temp->prev = head;
    k->prev = temp;
    temp->next = k;
}

void deleteAtPosi(Node *head, int posi){

};

void reverseByK(Node *&head, int k)
{
    while (head != NULL)
    {
        for (int i = 0; i < 11; i++)
        {
            cout << i << endl;
        }
    }
}

Node *loopInLinkedList(Node *head)
{

    Node *fast = head;
    Node *slow = head;
    Node *remove = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow)
        {
            remove = fast;
            slow = head->next;
            fast = head->next;
            break;
        }
    }
    while (slow != fast)
    {

        fast = fast->next;
        slow = slow->next;
        remove = remove->next;
    }
    remove->next = NULL;
    cout << slow->data << endl;
    return slow;
}

Node *removeDup(Node *&head)
{
    Node *tempHead = head;
    while (head->next != NULL)
    {
        if (head->data == head->next->data)
        {
            head->next = head->next->next;
        }
        else
        {
            head = head->next;
        }
    }
    return tempHead;
}

Node *removeDupFromUnSort(Node *&head)
{
    Node *inside = head->next;
    while (inside != NULL)
    {
        Node *insideNext = inside->next;

        while (insideNext != NULL)
        {
            if (inside->data == insideNext->data)
            {
                inside->next = inside->next->next;
                if (insideNext->next->next != NULL)
                    insideNext = insideNext->next->next;
            }
            else
            {
                insideNext = insideNext->next;
            }
        }
        head = head->next;
    }
    return head;
}

int main()
{

    Node *node = new Node(1);
    Node anna = Node(10);
    cout << node << endl;
    Node *head = node;
    Node *tail = node;

    // insertAtTail(tail, 2);
    // insertAtTail(tail, 3);
    // insertAtTail(tail, 2);
    // insertAtTail(tail, 2);
    // print(head);
    // removeDupFromUnSort(head);
    // print(head);

    return 0;
}