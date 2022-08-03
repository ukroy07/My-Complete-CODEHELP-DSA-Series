
/*
//USE of macros

#include<iostream>

using namespace std;

#define PI 3.14159           //Object-like Macros
#define AREA_OF_RECTANGLE(L,B) L*B       //function like macros
#define min(a,b) ((a<b)?a:b) 

#define ELE 1,\
            2,\
            3

#define AREA_OF_CIRCLE(R) PI*R*R 

int main()
{
    int R = 5;
    double area = PI*R*R;
    cout<<"AREA of circle = "<<area<<endl;
    cout<<"AREA of RECTANGLE = "<<AREA_OF_RECTANGLE(10,20)<<endl;
    cout<<"Minimum = "<<min(100,20)<<endl;

    int arr[] = {ELE};
    for(int i = 0; i<3;i++)
        cout<<arr[i]<<" ";

    cout<<endl<<"AREA of circle = "<<AREA_OF_CIRCLE(10)<<endl;
}
*/






/*
// ------------      GLOBAL VARIABLES            --------

#include<iostream>

using namespace std;

int score = 100;             //global variable - don't preferred to use, it's a bad practice(any function can change this global variable, that may cause to change the variable's value everywhere)

void b(int& i)
{
    i *= 10;
    cout<<i<<endl;
    cout<<score+10<<endl;
}

void a(int& i)               //used as a pass by reference(work flows discussed in previous video - as we are giving reference to the function of the same variable i created in main)
{
    cout<<i<<endl;
    b(i);
    cout<<score*10<<endl;
}

int main()
{
    int i = 5;
    a(i);
    cout<<i<<endl;
    cout<<score/10<<endl;
}
*/





/*
// Implement INLINE function

#include<iostream>

using namespace std;

inline int getMax(int& a,int& b)      //inline with pass by reference(just like macros)
{
    return (a>b) ? a : b;
}

int main()
{
    int a = 5, b = 10;

    int ans = getMax(a,b);
    cout<<ans<<endl;
    // if(a>b)
    //     cout<<a;
    // cout<<b;

    a += 20;
    b += 10; 
    ans = getMax(a,b);
    cout<<ans;

}
*/



//DEFAULT ARGUMENTS

#include<iostream>

using namespace std;

void print(int arr[],int size, int start = 0)        //start behaves like optional here
{
    for(int i = start;i<size;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    print(arr,5,2);
    cout<<endl;
    print(arr,5);       //print the whole array as it takes start=0 by default
}