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

ListNode* reverseNode(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;

    while (curr != NULL)
    {
        ListNode *temp = curr->next;

        curr->next = prev;

        prev = curr;

        curr = temp;
    }

    return prev;
}

int main()
{
    ListNode *head = new ListNode(10);

    head->next = new ListNode(20);
    head->next->next = new ListNode(30);

    printNode(head);

    head = reverseNode(head);

    cout << endl;

    printNode(head);
}