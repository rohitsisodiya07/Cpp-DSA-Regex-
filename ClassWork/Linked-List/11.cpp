// Delete Node at Given Position.
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void printNode(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int length(node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insertFront(node *&head)
{

    node *temp = new node(0);
    temp->next = head;
    head = temp;
}
void insertEnd(node *&head)
{

    node *temp = new node(40);
    node *remp = head;
    while (remp->next != NULL)
    {

        remp = remp->next;
    }
    remp->next = temp;
}
void deleteFront(node *&head)
{

    node *temp = head;
    head = head->next;
    delete (temp);
}
void deleteEnd(node *&head)
{

    node *temp = head;
    node *remp = head;
    while (remp->next != NULL)
    {
        temp = remp;
        remp = remp->next;
    }
    temp->next = NULL;
    delete (remp);
}
void insertGivenPosition(node *&head, int pos)
{

    node *temp = new node(15);
    node *prev = head;
    node *curr = head;
    while (pos)
    {
        prev = curr;
        curr = curr->next;
        pos--;
    }
    prev->next = temp;
    temp->next = curr;
}
void deleteGivenPosition(node *&head, int pos)
{
    node *prev = head;
    node *curr = head;
    while (pos)
    {
        prev = curr;
        curr = curr->next;
        pos--;
    }
    prev->next = curr->next;
    delete(curr) ;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    deleteGivenPosition(head, 2);
    printNode(head);
}