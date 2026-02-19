//Length of a Node.
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
int length(node *head){
    node*temp = head ;
    int count = 0 ;
    while( temp!= NULL ){
        count++ ;
        temp = temp->next ;
    }
    return count ;
    
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    printNode(head);
    cout << "Length of Node = " << length(head);
}