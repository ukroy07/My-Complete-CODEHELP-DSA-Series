
/*
// WAP to show the functioning of PASS BY VALUE concept
#include<iostream>

using namespace std;

void update(int n)             // value is copied here, concept is of - PASS BY VALUE
{                              //  
    n++;
}

int main()
{
    
    int i = 10;
    int& j = i;           // reference variable
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;

    i++;
    cout<<"i = "<<i<<endl;
    j++;
    cout<<"i = "<<i<<endl;
    

   int n = 5;

   int *ptr = &n;

   update(*ptr);

   cout<<"n = "<<n<<endl;               // value will be 5

}
*/








/*
// WAP to show the functioning of PASS BY REFERENCE concept
#include<iostream>

using namespace std;

void update(int& n)             // argumented value is of n here, concept is of - PASS BY REFERENCE
{
    n++;
}

// BAD practice
int& update2(int n)                // I am expecting that it prints the ouput as - 100, but prints the same as the argument
{
    int a = n;
    int& ans = a;
    ans *= 10;
    return ans;
}       //Because a has cope in the function itself only. so, value won't be updated normally..

int* fun(int n)           //Same problem as mentioned above -------------> BAD PRACTICE
{
    int* ptr = &n;
    return ptr;
}

int main()
{
   int n = 5;
   int s = 10;

   update(n);
   //update2(s);

    fun(n);              
   cout<<"n = "<<n<<endl;               // value will be 5
   //cout<<"s = "<<s<<endl; 
}
*/




/*
// WAP to allocate the memory for creating an array of size n during runn time by the use of DYNAMIC MEMORY ALLOCTAION using HEAP

#include<iostream>

using namespace std;

int getSum(int* ptr, int n)
{
    int sum = 0;
    for(int i = 0; i<n;i++)
    {
        sum+=ptr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;

    int *ptr = new int[n];             //using heap memory for creating an array of size n which will be given during run time
    
    for(int i = 0;i<n;i++)                
    {
        // cin>>*(ptr+i);                // giving all values using pointers
        cin>>ptr[i];                  // arr[i] = *(arr+i)
    }

    for(int i = 0;i<n;i++)
    {
        // cout<<*(ptr+i)<<" ";                // Printing the values of arrays
        cout<<ptr[i]<<" ";
    }cout<<endl;

    cout<<"SUM is = "<<getSum(ptr,n);
}
*/



/*
// WAP to show the use of VOID POINTER

#include<iostream>

using namespace std;

int main()
{
    int a=10;
    char b[]="xyz";

    void *p = &a;
    //p=&b;
    //cout<<*p<<endl;              //JUST BCZ of VOID POINTER can't be Dereferenced....
    cout<<*(int*)p<<endl;           //Here it runs fine...
}
*/



// ...................POINTER/ADDRESS TYPECASTING................

#include<iostream>

using namespace std;

int main()
{
    char *p;
    int l = 65;

    //--------- THE result of type conversion is always an rvalue. 
    // (int*)p = &l;     //rvalue can't be assigned to , that is why it doesn't compile.  
    // *(int**)&p=&l;
    // cout<<*p<<endl;            //returns A
    // cout<<p<<endl;             //returns A

    // p = &((char)l);     //ravlue can't be taken address of, this is why it also doesn't compile..
    p = (char*)&l;
    cout<<*p<<endl;       //returns A
    cout<<p<<endl;         //returns A
}


