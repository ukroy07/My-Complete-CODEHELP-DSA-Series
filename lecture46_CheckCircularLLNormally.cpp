
#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int data)
        {
            this -> data = data;
            this -> next = NULL;
        }
};

void InsertNode(Node* &tail, int element, int d)
{
    Node* temp = new Node(d);

    if(tail == NULL)       // for Empty List
    {
        tail = temp;
        temp -> next = temp;
    }
    else
    {
        //FOR non-empty List
        // Assuming that element is prsent in the list
        Node* curr = tail;        // head to exist nai krta hai

        while(curr -> data != element)
        {
            curr = curr -> next;
        }            // iske baahar aaye mtlb element found ho gya hai

        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


void Print(Node* tail)         // copied from lecture 44-3
{
    Node* temp = tail;

    // IF there is an empty List
    if(tail == NULL)
    {
        cout<<"LIST IS NULL, Can't Printed ANYTHING."<<endl;
        return;
    }

    do
    {
        cout<<tail -> data <<" ";
        tail = tail -> next;
    } while(tail != temp);
    cout<<endl;
}


bool isCircularList(Node* head)           // LOVE's Approach
{
    if(head == NULL)
        return true;

    Node* temp = head -> next;
    while(temp!=NULL && temp!=head)
        temp = temp -> next;

    if(temp==head)
        return true;
    else 
        return false; 
}

int main()
{
    Node* tail = NULL;
    Print(tail);
    
    InsertNode(tail,1,20);    // insertion in empty List
    Print(tail);
    
    // DeleteNode(tail,20);
    // Print(tail);      
    
    InsertNode(tail,20,30);
    Print(tail);
    InsertNode(tail,30,40);
    Print(tail);
    InsertNode(tail,40,50);
    Print(tail);
    InsertNode(tail,30,60);
    Print(tail);
    InsertNode(tail,60,100);
    Print(tail);
    InsertNode(tail,100,1000);
    Print(tail);
    if(isCircularList(tail))
        cout<<"is Circular"<<endl;
    else
        cout<<"NOT"<<endl;
}