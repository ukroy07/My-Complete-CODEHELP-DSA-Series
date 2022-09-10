
// Implementation of Circular Linked List
// Singly based Circular Linked List

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


// In case of Circular Linked List, We don't need to consider Head manually, tail is efficient for traversing throughtout the LL
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


// Position wala to kr hi liye h dono linked list m
// Isme value dekh k delete kr dete hai -> dono tarah ka concept aa jayega
void DeleteNode(Node* &tail, int element)
{
    // empty List aa gya to
    if(tail == NULL)
    {
        cout<<"Given List is Empty, UJJAWAL."<<endl;
        return;
    }
    else
    {
        // NON-empty wala part
        // Assuming that element is present in the List

        Node* previous = tail;
        Node* curr = previous -> next;
        while(curr -> data != element)
        {
            previous = curr;
            curr = curr -> next;  
        }

        previous -> next = curr -> next;

        //BUT, In case of 1 node linked list ------------ CATCH POINT
        if(curr == previous)
        {   
            tail == NULL;
        }
        //catch point ------> for greater than equal to 2 no of NODE
        else if(tail == curr)
            tail = curr -> next;          
        
        curr -> next = NULL;
        delete curr;
    }
}



void Print(Node* tail)
{
    Node* temp = tail;

    // IF there is an empty List
    if(tail == NULL)
    {
        cout<<"LIST IS NULL, Can't Printed ANYTHING."<<endl;
        return;
    }


    // cout<< tail -> data <<" "; 
    // while(tail -> next != temp)
    // {
    //     cout<<tail -> next -> data << " ";        // ------------------self observed (Thoda thoda PRO banne lga mai)------------------
    //     tail = tail -> next;
    // }
    // cout<<endl;


    do
    {
        cout<<tail -> data <<" ";
        tail = tail -> next;
    } while(tail != temp);
    cout<<endl;
}

int main()
{
    Node* tail = NULL;
    Print(tail);
    
    DeleteNode(tail,100);
    
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
    DeleteNode(tail,20);
    Print(tail);
    DeleteNode(tail,50);
    Print(tail);
    DeleteNode(tail,100);
    Print(tail);
}

// CODE RUNS PERFECTLY FINE        --------      