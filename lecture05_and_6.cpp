
#include<iostream>
#include<math.h>

using namespace std;

int main()
{

    /*
    // Print fibonacci series of first n numbers.........
    int a=0;
    int b=1;
    int c;

    int n;
    cout<<"Enter any number:-";
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for(int i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    */






   // Converting decimal to binary for +ve numbers
   /*
   int n;
   cout<<"Enter number to find the binary representation of it-->"<<endl;
   cin>>n;

   int answer=0;
   int i=0;
   while(n!=0)
   {
    int bit = n&1;
    answer = (bit*pow(10,i))+answer;
    
    n = n>>1;
    i++;

   }
   cout<<"Binary form of "<<n<<" is:-"<<answer;
   */


   
   
   // converting decimal to binary for -ve numbers
   /*
   long long int n;
   cout<<"Enter the number:"<<endl;
   cin>>n;

   unsigned long long int i=0, answer = 0;

   if(n<0)
   {
    n=pow(2,16)+n;
   }
   cout<<n<<endl;                // returns that number's value in +ve value

   while(n)
   {
    int lastbit = n&1;
    answer = (pow(10,i)*lastbit)+answer;
    
    n=n>>1;
    i++;
   }
   cout<<answer<<endl;
   */

   

   // converting binary to decimal by taking input as a integer of that required binary representation.........
   int n;
   cout<<"Enter binary representation in integer form -->"<<endl;
   cin>>n;

   int answer=0;
   int i=0;
   while(n!=0)
   {
    int digit = n%10;

    if(digit==1)
    {
        answer = answer + pow(2,i);
    }
    
    n = n/10;
    i++;

   }
   cout<<"Decimal form is "<<answer;

    
}