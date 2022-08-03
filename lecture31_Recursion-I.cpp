
// Recursion - I
#include<iostream>

using namespace std;

void CountReverse(int n)          
{
    // while(n>=0)              //My Approach
    // {
    //     cout<<n<<" ";
    //     n--;
    // }
    // CountReverse(n);

    if(n<0)
        return ;
    
    cout<<n<<" ";           // n n-1 n-2 n-3 n-4.... 3 2 1 0
    CountReverse(n-1);
    //cout<<n<<" ";           0 1 2 3 4 5 .....
}

int PowerOfTwo(int n)        //Power of Two
{
    if(n==0)
        return 1;
    return 2*PowerOfTwo(n-1);
}

int factorial(int n)           //Factorial Using RECURSION
{
    if(n<1)
        return 1;
    return n*factorial(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<n<<"! = "<<factorial(n)<<endl;
    cout<<"Power of 2^n = "<<PowerOfTwo(n)<<endl;
    CountReverse(n);
}

