
/*
// WAP using RECURSION to reverse the STRING

#include<iostream>

using namespace std;

// void ReverseString(int i, int j,string& str )            //Solved using TWO-Pointer APPROACH
// {
//     if(i>j)
//         return;

//     swap(str[i++],str[j--]);
//     ReverseString(i,j,str);
// }


void ReverseString(int i, string& str )                  //Using ONE Pointer ONLY     
{
    int length = str.length();
    if(i>length-i-1)
        return;
    swap(str[i++],str[length-i-1]);
    ReverseString(i,str);
}

int main()
{
    string str = "lawajju";

    ReverseString(0,str);
    cout<<str;
}
*/





/*
// WAP to check the palindrome using recursion

#include<iostream>

using namespace std;

bool CheckPalindrome(int i, string& str )                      
{
    int length = str.length();
    //Base case
    if(i>length-i-1)
        return true;
    
    if(str[i]!=str[length-i-1])
        return false;
    else
        return CheckPalindrome(i+1,str);
}

int main()
{
    string str = "HuaahaauH";

    if(CheckPalindrome(0,str))
        cout<<"String is Palindrome."<<endl;
    else
        cout<<"NOT Palindrome"<<endl;
}
*/



/*
//Q WAP to find the Power of b on a - a^b

#include<iostream>

using namespace std;

int Power(int a, int b)
{
    //Base Case
    if(b==0)
        return 1;
    
    if(b%2==0)
        return Power(a,b/2)*Power(a,b/2);
    else
        return a*Power(a,b/2)*Power(a,b/2);
}

int main()
{
    cout<<Power(2,10);
}
*/






//WAP to PERFORM ---------------BUBBLE SORT---------------- using RECUSRION
#include<iostream>

using namespace std;


// void BUBBLESORT(int* arr, int n)                   //BUBBLE SORT
// {
//     //BASE CASE - If array has one/Zero element - MEANS ALREADY SORTED
//     if(n==1 || n==0)
//         return ;

//     //SOLVING FIRST CASE - LARGEST ELEMENT KO END M PAHUNCHA DEGA
//     for(int i = 0; i<n-1; i++)
//     {
//         if(arr[i]>arr[i+1])
//             swap(arr[i],arr[i+1]);
//     }

//     BUBBLESORT(arr,n-1);
    
// }



// void SELECTIONSORT(int* arr, int n)                      //SELECTION SORT
// {
//     //BASE CASE
//     if(n==1 || n==0)
//         return;
    
//     // SOLVING FIRST CASE
//     for(int i = 1 ;i<n;i++)
//     {
//         if(arr[0]>arr[i])
//             swap(arr[0],arr[i]);
//     }
    
//     SELECTIONSORT((arr+1),n-1);
// }



void INSERTIONSORT(int* arr, int n)
{
    //BASE CASE
    if(n==1 || n==0)
        return;

    INSERTIONSORT(arr,n-1);
    
    //SOLVING FIRST CASE
    int last = arr[n-1];
    int j = n-2;
    while(j>=0 && arr[j]>last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}




int main()
{
    int arr[10] = {20,10,30,5,100,80,15,88,90,1};

    //   BUBBLESORT(arr,10);
    //   SELECTIONSORT(arr,10);
    INSERTIONSORT(arr,10);
    for(int i = 0; i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}



