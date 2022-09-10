

// WAP to reverse the Doubly Linked List

#include<iostream>

using namespace std;

class Node
{
    public:
        Node* prev;
        int data;
        Node* next;

        //CONSTRUCTOR
        Node(int d)
        {
            this -> prev = NULL;
            this -> data = d;
            this -> next = NULL;
        }
};



// Find the length of given Linked List
int getLength(Node* head)
{
    int length = 0;
    while(head != NULL)
    {
        head = head -> next;
        length++;
    }
    return length;
}


// Traversing the given LL
void Print(Node* head)
{
    while(head != NULL)
    {
        cout<< head->data << " ";
        head = head -> next;
    }
    cout<<endl;
}


void InsertAtHead(Node* &head, Node* &tail, int d)         // Insert at first position..
{
    if(head == NULL)      // given head is empty
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}


Node* Reverse(Node* &head)
{
    if(head == NULL || head -> next == NULL)
        return head;

    Node* curr = head;
    Node* PreviousNode = NULL;

    while(curr != NULL)
    {
        PreviousNode = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = PreviousNode;
        curr = curr -> prev;
    }
    return PreviousNode -> prev;
}


int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    InsertAtHead(head,tail,20);
    InsertAtHead(head,tail,30);
    InsertAtHead(head,tail,40);
    InsertAtHead(head,tail,50);
    InsertAtHead(head,tail,60);
    InsertAtHead(head,tail,70);
    InsertAtHead(head,tail,80);
    InsertAtHead(head,tail,90);
    InsertAtHead(head,tail,100);
    Print(head);
    cout<<"Head :-> "<<head -> data<<endl;
    cout<<"tail :-> "<<tail -> data<<endl;
    head = Reverse(head);
    Print(head);
    cout<<"Head :-> "<<head -> data<<endl;
}