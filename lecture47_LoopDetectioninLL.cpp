

// APPROACH - 1 -> By using MAP

 #include<iostream>
 #include<map>

 using namespace std;

 class Node
 {
    public:
        int data;
        Node* next;

        Node(int d)
        {
            data = d;
            next = NULL;
        }
 };

 bool DetectLoop(Node* head)                // using MAP
 {
    if(head == NULL)
        return false;
    
    map <Node*, bool> visited;

    Node* temp = head;        // iss node s saara list ko traverse krunga

    while(temp!=NULL)
    {
        // cycle is present
        if(visited[temp]==true)
        {   
            cout<<"Present on the(using MAP):- "<<temp -> data<<endl;
            return true;
        }

        visited[temp] = true;    // true maarne s pahle check to kr lo ki pahle s true hai ki nai
        temp = temp -> next;
    }
    return false;
 }

// ----------------------------FLOYD's ALGO-------------------------------------------------------
Node* FloydDetectLoop(Node* head)               // this will return the any node which will be present in the following CYCLE
{
    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL && fast -> next!=NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast)
        {
            // cout<<"Cycle is present at :- "<<slow -> data << endl;
            return slow;
        }
    }
    return NULL;
}


// Find the starting node of the CYCLE present
Node* StartingNode(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }

    Node* intersection = FloydDetectLoop(head);
    Node* slow = head;

    while(slow!=intersection)
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}


//Removing that Node which causes the cycle
void RemoveLoop(Node* head)        //works in each test-cases
{
    if(head == NULL)
        return;
    
    Node* StartofLoopNode = StartingNode(head);
    Node* temp = StartofLoopNode;

    while(temp -> next != StartofLoopNode)
    {
        temp = temp -> next;
    }

    temp -> next = NULL;

}
//-------------------------------------FLOYD's ALGO--------------------------------------------------------------



void InsertAtHead(Node* &head, int d)             // A function inserting a data at Head
{
    Node* temp = new Node(d);            // Creating new node
    temp -> next = head;
    head = temp;
}


void PrintLL(Node* head)           // Copied from lecture 44-1
{
    while(head!=NULL)
    {
        cout<<head -> data <<" ";
        head = head -> next;
    }
    cout<<endl;
}


int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;        
    PrintLL(head);

    InsertAtHead(head,100);
    PrintLL(head);

    InsertAtHead(head,1000);
    PrintLL(head);

    InsertAtHead(head,500);
    InsertAtHead(head,1100);
    InsertAtHead(head,550);
    InsertAtHead(head,10);
    
    PrintLL(head);
    //To verify head and tail
    cout<<"Head :-> "<<head -> data<<endl;
    cout<<"tail :-> "<<tail -> data<<endl;

    tail -> next = head -> next;      // LOOP check krne k liye
    // PrintLL(head);      -> LOOP/cycle k kaaran infinite LOOP m fasa reh gya..

    if(DetectLoop(head))
        cout<<"Loop is present.(Using MAP)"<<endl;
    else
        cout<<"Loop is not present.(Using MAP)"<<endl;

    if(FloydDetectLoop(head))             // Verifying Floyd's detection algo
        cout<<"Loop is present.(using FLOYD's cycle)"<<endl;
    else
        cout<<"Loop is not present.(using FLOYD's cycle)"<<endl;

    
    cout<<"The starting node of the cycle present(FLOYD's ALGO) :-> "<<StartingNode(head) -> data <<endl;
    RemoveLoop(head);
    cout<<endl<<"Loops is removed."<<endl;
    PrintLL(head);
} 

// WORKING FINE.....