
// Implementation of Doubly Linked List :- 

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


void InsertAtTail(Node* &head, Node* &tail, int d)         // Insert at last position..
{
    if(tail == NULL)      // given head is empty
    {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}


void InsertAtPosition(Node* &head, Node* &tail, int d, int position)
{
    if(position == 1)
    {
        InsertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;         // Creating a node for the head
    int count = 1;
    while(count<position-1)       // Traversing to the target Node
    {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL)        //means last me insert krna hai
    {
        InsertAtTail(head,tail, d);
        return;
    }

    // ab middle m kahi insert krna hai to uske according code
    Node* NodeToInsert = new Node(d);

    NodeToInsert -> next = temp -> next;
    temp -> next -> prev = NodeToInsert; 

    temp -> next = NodeToInsert;
    NodeToInsert -> prev = temp;
}


void Deletion(Node* &head, Node* &tail, int Position)
{
    if(Position == 1)
    {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* previous = NULL;

        int cnt = 1;
        while(cnt<Position)         // similar as Singly List List
        {
            previous = curr;     
            curr = curr -> next;  
            cnt++;
        }

        if(curr -> next == NULL)    // tail ko v to update krna hai, agar hm last position p delete kr rhe hai to
        {
            curr -> prev = NULL;
            tail = previous;
        }
        else
        {
            curr -> prev = NULL;
        }

        previous -> next = curr -> next;     // isse agar curr k next NULL ko point kr rha hoga to wo v work m aa jayega
        curr -> next = NULL;
        delete curr;
    }
}


bool isCircularList(Node* head)         // fn which checks the given LL is circular or not
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
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    Print(node1);
    // cout<<"Length of given Node is -> "<< getLength(node1)<<endl;

    InsertAtHead(head,tail,20);
    InsertAtHead(head,tail,30);
    InsertAtHead(head,tail,40);
    InsertAtHead(head,tail,50);

    InsertAtTail(head,tail,60);
    // InsertAtPosition(head,tail,1000,1);        // working fine - inserting at first position..
    InsertAtPosition(head,tail,1000,7);          // Works fine

    InsertAtPosition(head,tail,100,4);
    Print(head);

    Deletion(head, tail, 1);       // working fine for position = 1
    Print(head);

    Deletion(head, tail, 7);
    Print(head);
    cout<<"Head :-> "<<head -> data<<endl;
    cout<<"tail :-> "<<tail -> data<<endl;

    Deletion(head, tail, 3);
    Print(head);
    cout<<"Head :-> "<<head -> data<<endl;
    cout<<"tail :-> "<<tail -> data<<endl;

    cout<<getLength(head)<<endl;

    if(isCircularList(head))
        cout<<"Give LL is Circular."<<endl;
    else
        cout<<"NOT Circular."<<endl;
}