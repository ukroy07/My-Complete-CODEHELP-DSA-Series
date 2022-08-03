
/*
// CODESTUDIO - Count Ways To Reach The N-th Stairs

#include<iostream>

using namespace std;

int countDistinctWays(int nStairs)
{
    if(nStairs<0)
        return 0;
    
    if(nStairs==0)
        return 1;
    
    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2); 
}

int main()
{
    int n;
    cin>>n;
    cout<<countDistinctWays(n);
}

// This code is not optimised one, can be completely optimised using DYNAMIC PROGRAMMING.
// THAT's why not passed all test cases in CODE-STUDIO
*/






// EXCITING QUESTIONS

// Q. SAY DIGITS

// like -  If we give inputs as 412 - It prints like four one two

#include<iostream>

using namespace std;

void sayDigits(int n)
{
    //BASE CASE
    if(n==0)
        return;
    
    string arr[10] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    
    // Processing Part
    int digit = n%10;
    n = n/10;
    //cout<<arr[digit]<<" ";           //OPPOSTIE Print ho jayega yha

    //Recursive call
    sayDigits(n);
    cout<<arr[digit]<<" ";

}

int main()
{
    int n;
    cin>>n;

    sayDigits(n);
}