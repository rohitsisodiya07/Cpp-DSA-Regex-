// Check if a linked list contains a cycle or not.

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

void printNode(ListNode *&head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL";
}

bool detectCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ListNode *head = new ListNode(10);

    head->next = new ListNode(20);
    head->next->next = new ListNode(30);


    head->next->next->next = head;

    if (detectCycle(head))
    {
        cout << "Cycle Detected";
    }
    else
    {
        cout << "No Cycle";
    }
}