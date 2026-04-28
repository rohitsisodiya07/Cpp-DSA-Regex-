// Insert at Given pos in  LinkList

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
void insertLast(ListNode *&head, int data)
{

    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new ListNode(data);
}
void insertGiven(ListNode *&head, int data, int pos)
{

    ListNode *temp = head;
    ListNode *prev = head;

    while (pos > 1)
    {
        prev = temp;
        temp = temp->next;
        pos--;
    }
    ListNode *newNode = new ListNode(data);
    prev->next = newNode;
    newNode->next = temp;
}
void deleteFront(ListNode *&head)
{

    if (head == NULL)
    {
        return;
    }

    ListNode *temp = head;
    head = head->next;
    delete temp;
}
void deleteLast(ListNode *&head)
{

    ListNode *temp = head;
    ListNode *prev = head;
    while (temp->next != NULL)
    {

        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
}
void deleteGiven(ListNode *&head, int pos)
{

    ListNode *temp = head;
    ListNode *prev = head;
    while (pos > 1)
    {

        prev = temp;
        temp = temp->next;
        pos--;
    }
    prev->next = temp->next;
    // temp->next = NULL ;
    delete temp;
}

int main()
{
    ListNode *head = new ListNode(30);
    insertFront(head, 20);
    insertFront(head, 10);
    insertLast(head, 40);
    insertGiven(head, 25, 3);
    deleteFront(head);
    deleteLast(head);
    deleteGiven(head, 2) ;
    printNode(head);
}