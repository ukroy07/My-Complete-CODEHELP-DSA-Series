

// ---------------------------------------------------------------
/*
// Stack using STL

#include<iostream>
#include<stack>

using namespace std;


int main()
{
    stack<int> s;

    //push operation
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    //pop operation
    s.pop();

    cout<<"Print the top element of Stack : "<<s.top() <<endl;
    // cout<<s.peek();          // didn't work why?

    cout<<"print the size of given stack : "<<s.size() <<endl;

    cout<<"Is Empty : "<<s.empty();
}
*/
//-------------------------------------------------------------------

/*
// Implementation of Stacks by class

#include<iostream>

using namespace std;

// stacks can be implemented using array as well as Linked List

class Stack
{
    //properties
    public :
        int *arr;
        int top;
        int size;

    Stack(int size)
    {
        this -> size = size;
        top = -1;
        arr = new int[size];
    }

    //functions
    void push(int element)
    {
        if(size-top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek()
    {
        if(top>=0)
            return arr[top];
        else
        {
            cout<<"Peek() can't be performed because of Empty Stack"<<endl;
            return -1;
        }
    }

    bool IsEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);       // stack overflow    

    cout<<"Top element of given Stack is : "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element of given Stack after pop is : "<<st.peek()<<endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<"Is given stack is empty :"<<st.IsEmpty();
}
*/
//------------------------------------------------------------------------


// Implementing Stacks by Linked List

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
            next = NULL;
        }
};

bool isEmpty(Node* top)
{
    if(top==NULL)
        return true;
    else
        return false;
}

void push(Node* &top, int x)
{
    Node* temp = new Node(x);
    temp -> next = top;
    top = temp;
}

void pop(Node* &top)
{
    if(top != NULL)
    {
        Node* temp = top;
        top = top -> next;
        int ans = temp -> data;
        delete temp;
    }
    else if(isEmpty(top))
        cout<<"Stack is Underflow"<<endl;
}

int topp(Node* top)
{
    if(top!=NULL)
        return top -> data;
    else
        return -1;
}

int main()
{
    Node* top = NULL;
    push(top,10);
    push(top,20);
    cout<<topp(top)<<endl;       
    push(top,30);
    push(top,40);
    cout<<topp(top)<<endl;

    pop(top);
    cout<<topp(top)<<endl;

    cout<<isEmpty(top)<<endl;
}

// Working fine....


