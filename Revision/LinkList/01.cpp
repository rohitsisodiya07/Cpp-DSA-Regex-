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

int main()
{
    ListNode *head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    printNode(head);
}