
//----------------------LINKED LIST-----------------------------


// An complete implementation of Linked List 
// a. InsertAtHead
// b. InsertAtTail
// c. InsertAtPosition
// d. Deletion

#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        // Constructor use
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }

        // Destructor use - Node ko free kraane k liye
        // ~Node()
        // {
        //     int value = this -> data;

        //     if(this->next != NULL)
        //     {
        //         delete next;
        //         this->next = NULL;
        //     }
        //     cout<<"Memory is free for the node with the data"<<value<<endl;
        // }
};


void InsertAtHead(Node* &head, int d)             // A function inserting a data at Head
{
    Node* temp = new Node(d);            // Creating new node
    temp -> next = head;
    head = temp;
}


void InsertAtTail(Node* &tail, int n)          // Inserting value at the end/Tail
{
    Node* temp = new Node(n);
    tail -> next = temp;
    tail = temp;       // tail = tail -> next; 
}


// Insert at any given position..
void InsertAtPosition(Node* &head, Node* &tail, int d, int NthPos)
{
    // AGAR POSITION START m insert krne k liye aa jaaye
    if(NthPos == 1)
    {
        InsertAtHead(head,d);
        return;
    }
 
    // Trversing krna pdega starting se, to temp ko head se darsha diya hai
    Node* temp = head;
    int cnt = 1;
    while(cnt<NthPos-1)
    {
        temp = temp->next;    // temp ko aage bdhaate rhe (n-1)th position tk
        cnt++;
    }

    // If, we have to Insert at Last Position
    if(temp -> next == NULL)
    {
       InsertAtTail(tail,d); 
       return;
    }

    //Craeting a new node for d to insert between.....
    Node* NodetoInsert = new Node(d);        // Dynamically allocation..

    NodetoInsert -> next = temp -> next;

    temp -> next = NodetoInsert;
}


// If position were given for deletion
void DeleteNode(Node* &head, Node* &tail, int Position)
{
    // Deleting at start node
    if(Position==1)
    {
        Node *temp = head;        // memory free krne k liye ek temp bnaaya hoon
        head = head -> next;
        temp -> next = NULL;       // delete krne s pahle uske next ko NULL kr deta hoon
        delete temp;              // memory free v to krna hai
    }
    //Deleting any middle or last node 
    else
    {
        // 2 Node bnaani hogi traverse krke ek ko delete krne k liye aur dusra ko deleted k aage wale s jodne k liye
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<Position)
        {
            prev = curr;       //key points -> curr ko update krne s pahle prev ko update krna hoga..
            curr = curr -> next;  
            cnt++;
        }       // loop s niklne k baad , current target node aur prev usske pahle wale node ko bata rha hoga

        if(curr -> next == NULL)    // tail ko v to update krna hai, agar hm last position p delete kr rhe hai to
        {
            prev -> next = curr -> next;
            tail = prev; 
        }
        else
            prev -> next = curr -> next; 

        curr -> next = NULL;
        delete curr;
    }

}


void PrintLL(Node* head)           //isse Linkedlist m traversing v sikh jaunga
{
    // Node* temp = head;     // not needed to create a temp node

    while(head!=NULL)
    {
        cout<<head -> data <<" ";
        head = head -> next;
    }

    cout<<endl;
}


int main()
{
    //Craeting new node
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //Pointing head to the new node craeted
    Node* head = node1;
    Node* tail = node1;         // tail k jyda jruri ni hai bs tail m insert krne k liye apne faide k liye use kr liye
    PrintLL(head);

    InsertAtHead(head,100);
    PrintLL(head);

    InsertAtHead(head,1000);
    PrintLL(head);

    InsertAtTail(tail,500);       // 1000 100 10 500
    PrintLL(head);

    InsertAtPosition(head, tail, 111, 5);     // 1000 100 10 500 111
    PrintLL(head);

    //To verify head and tail
    cout<<"Head :-> "<<head -> data<<endl;
    cout<<"tail :-> "<<tail -> data<<endl;

    DeleteNode(head,tail, 5);
    PrintLL(head);
    cout<<"Head :-> "<<head -> data<<endl;
    cout<<"tail :-> "<<tail -> data<<endl;
}