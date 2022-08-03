

/*
// 1. WAP to implement the SEIVE of ERATOSTHENES algo to print the all primes less than any number..

#include<iostream>
#include<vector>

using namespace std;

void countPrimes(int n)               // SEIVE OF ERATOSTHENES
{
    int count=0;
    vector<bool>prime(n+1,true);     // from 0 to n
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            count++;
            cout<<i<<" "; 
            for(int j=2*i;j<n;j=j+i)
                prime[j]=0;    
        }
    }
    cout<<endl<<"So, The total number of primes between 0 to "<<n<<" is -> "<<count;
}

int main()
{
    int num;
    cout<<"Enter the num :-"<<endl;
    cin>>num;

    countPrimes(num);
}
*/




/*
// 2. WRITE a program to implement SEGMENTED SEIVE using SEIVE OF ERATOSTHENES....

-> 

        process ->

        (1) generate all primes till <=sqrt(R)
        (2) create a dummy array of size (R-L+1) and mark each element of it as TRUE
        (3) Mark all multiples of prime in range L to R in dummy...

#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

//By considering all the constarints

int N = 1000000;               //constraints given
bool sieve[1000001];

void createSieve()               // SEIVE OF ERATOSTHENES
{
    for(int i=0;i<=N;i++)
        sieve[i]=true;
    
    sieve[0]=sieve[1]=false;
    
    for(int i=2;i<N;i++)
    {
        if(sieve[i])
        { 
            for(int j=2*i;j<N;j=j+i)
                sieve[j]=0;    
        }
    
    }
}

vector<int> generatePrimes(int N)
{
    vector<int>ans;

    for(int i=2;i<=N;i++)
    {
        if(sieve[i])
            ans.push_back(i);
    }
    return ans;
}

int main()
{
    createSieve();
    int L,R;
    cout<<"Give limits ->"<<" ";
    cin>>L>>R;

    //Step1: generate all primes till sqrt(R)
    vector<int> primes = generatePrimes(sqrt(R));

    //step2: create a dummy array of size R-L+1 and make each element as TRUE
    int dummy[R-L+1];
    for(int i=0;i<R-L+1;i++)
        dummy[i]=1;

    //step3: for all prime numbers, mark its multiple as false
    for(auto pr:primes)
    {
        int firstMultiple = (L/pr)*pr;
        if(firstMultiple<L)
            firstMultiple+=pr;

        for(int j = max(firstMultiple,pr*pr);j<=R;j+=pr)
            dummy[j-L] = 0;
    }

    //step4: get all the primes
    cout<<"primes between "<<L<<" and "<<R<<" are:- "<<" ";
    for(int i=L;i<=R;i++)
    {
        if(dummy[i-L])
            cout<<i<<" ";
    }
    cout<<endl;
}
*/





/*
// -> WAP to implement GCD BETWEEN TWO NUMBERS

#include<iostream>

using namespace std;

// int GCD(int a, int b)
// {
//     if(a==0)
//         return b;
    
//     if(b==0)
//         return a;

//     while(a!=b)
//     {
//         if(a>b)
//             a = a-b;
        
//         if(b>a)
//             b = b-a;
//     }return b;
// }

int GCD(int a,int b)         //using recurrsion
{
    if (b ==0)
        return a;
    
    return GCD(b, a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is :-> "<<GCD(a,b);
}
*/



/*
// short code to show the conversion of int to long long 
#include<iostream>
#include<typeinfo>

using namespace std;

int main()
{
    int n = 4;
    cout<<1ll*n<<endl;
    cout<<2ll*n<<endl;
    cout<<3ll*n<<endl;
    cout<<4ll*n<<endl;
    cout<<5ll*n<<endl;
    cout<<6ll*n<<endl;
    cout<<7ll*n<<endl;
    cout<<8ll*n<<endl;
    cout<<9ll*n<<endl;
    cout<<10ll*n<<endl;

    long long int m = 10LL*n;            // long long int

    cout<<typeid(100LL*n).name()<<endl;           // returns x -> long long int
    cout<<typeid(n).name()<<endl;                 //returns i -> int
    cout<<typeid(m).name()<<endl;                // returns x -> long long int    
}
*/








// WAP to implement find the catalan series..

#include<iostream>

using namespace std;

unsigned long long int catalan(unsigned int n)
{
    if(n<=1)
        return 1;

    unsigned long long int result = 0;
    for(int i = 0; i<n;i++)
        result+=catalan(i)*catalan(n-i-1);
    return result;    
}

int main()
{
    unsigned int num;
    cout<<"Enter the number :-"<<endl;
    cin>>num;
    cout<<"catalan series for 0 to "<<num<<" are:-> "<<" ";
    for(int i=0;i<=num;i++)          //from 0 to n(included) tk
    {
        cout<<catalan(i)<<" ";
    }
    cout<<endl;
}
