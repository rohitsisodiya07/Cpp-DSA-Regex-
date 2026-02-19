//Print a Node.

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    char data;
    node *next;

    node(char val)
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

int main()
{
    node *head = new node('R');
    head->next = new node('O');
    head->next->next = new node('H');
    head->next->next->next = new node('I');
    head->next->next->next->next = new node('T');
    printNode(head);
}