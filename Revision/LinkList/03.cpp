// Insert at Last in  LinkList

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
void insertLast(ListNode *&head, int data){

    ListNode *temp = head ;
    while( temp ->next != NULL){
        temp = temp -> next ;
    }
    temp->next = new ListNode(data) ;
}

int main()
{
     ListNode *head = new ListNode(30);
    insertFront(head, 20);
    insertFront(head, 10);
    insertFront(head, 0);
    insertLast(head, 40) ;
    printNode(head) ;

}