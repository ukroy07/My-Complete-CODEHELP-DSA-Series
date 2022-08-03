
/*
// Q1. make a mini calculator for +,-,*,/,%

#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of first number:-"<<endl;
    cin>>a;

    cout<<"Enter the value of Second number:-"<<endl;
    cin>>b;

    char ch;
    cout<<"Enter the operation type:-"<<endl;
    cin>>ch;

    switch(ch)
    {
        case '+': cout<<"Result :- "<< a << "+" << b << "=" << (a+b) << endl;
                    break;

        case '-': cout<<"Result :- "<< a << "-" << b << "=" << (a-b) << endl;
                    break;

        case '*': cout<<"Result :- "<< a << "*" << b << "=" << (a*b) << endl;
                    break;

        case '/': cout<<"Result :- "<< a << "/" << b << "=" << (a/b) << endl;
                    break;

        case '%': cout<<"Result :- "<< a << "%" << b << "=" << (a%b) << endl;
                    break;

        default: cout<<"Please, Enter a valid operation...."<<endl;
    }
}

*/




/*
// q2. WAP to find the total number of 500,100,10,5 and 1 notes of given amount of money using SWITCH case....

#include<iostream>

using namespace std;

int main()
{
    int amount;
    int n500,n100,n10,n5,n1;
    n500 = n100 = n10 = n5 = n1 = 0;
    cout<<"Enter the amount:-"<<endl;
    cin>>amount;

    switch(1)
    {
      case 1: n500=amount/500;
              amount=amount%500;
              cout<<"No of 500 Rupee notes required are="<<n500<<endl;
              
         
      case 2: n100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee notes required are="<<n100<<endl;
              

      case 3: n10=amount/10;
              amount=amount%10;
              cout<<"No of 10 Rupee notes required are="<<n10<<endl;
               

      case 4: n5=amount/5;
              amount=amount%5;
              cout<<"No of 5 Rupee notes required are="<<n5<<endl; 

      case 5: n1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee notes required are="<<n1<<endl; 
                  
    }

}
*/


/*
// Q3. WAP to calculate the value of nCr

#include<iostream>

using namespace std;

int factorial(int n)
{
    int ans = 1;

    for(int i=1;i<=n;i++)
    {
        ans = ans*i;
    }

    return ans;
}

int nCr(int n, int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
    int n,r;
    cin>>n>>r;

    cout<<nCr(n,r);
}

*/



/*
// Q4.. ...................1st HW.........................  FIND NTH A.P.  (3*n+7)

#include<iostream>

using namespace std;

int NthAP(int n)
{
    return ((3*n)+7);
}

int main()
{
    int n;
    cin>>n;

    cout<<NthAP(n);
}

*/



/*
//Q5.. ......................2ND HW..................... couting the number of setbits of two given number.....

#include<iostream>

using namespace std;

int CountSetBits(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1)
            count++;
        n = n>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cin>>a>>b;

    int count1 = CountSetBits(a);
    int count2 = CountSetBits(b);

    cout<<"Total number of bit 1 present in a and b is:- " << count1+count2<<endl;

}
*/



/*
// Q7 Write a program to print the nth fibonacci number..........
#include<iostream>

using namespace std;

int NthFibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for(int i=3;i<=n;i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n;
    cin>>n;

    cout<<NthFibonacci(n);
}

*/



