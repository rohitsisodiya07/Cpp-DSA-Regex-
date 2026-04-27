// Traverse LinkList

#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};
void printNode(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}
void insertFront(ListNode *&head, int data)
{
    ListNode *newNode = new ListNode(data);
    newNode->next = head;
    head = newNode;
}

int main()
{
    ListNode *head = new ListNode(30);
    insertFront(head, 20);
    insertFront(head, 10);
    printNode(head);
}