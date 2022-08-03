
// RECURSION WITH ARRAYS


/*
//    Q1.Check Whether an array is SORTED or NOT using RECURSION
#include<iostream>

using namespace std;

bool checkSorted(int arr[], int n)      //using RECURSION
{
    //base case
    if(n==1 || n==0)
        return true;
    
    if(arr[0]>arr[1])
        return false;
    return checkSorted(arr+1,n-1);
}

int SumArray(int arr[], int n)
{
    if(n==1)
        return arr[0];
    return arr[0]+SumArray(arr+1,n-1);
}

int main()
{
    int arr[10] = {100,200,300,400,500,600,700,800,900,1000};

    cout<<checkSorted(arr,10)<<endl;

    cout<<SumArray(arr,10);
}
*/






/*
//Implement LINEAR SEARCH using RECURSION

#include<iostream>

using namespace std;

int LinearSearch(int arr[],int size, int key)
{
    size--;
    //Base CASE
    if(size==0)
        return -1;

    if(arr[size]==key)
        return size;
    return LinearSearch(arr,size,key);
}

int main()
{
    int arr[10] = {100,200,300,400,500,600,700,800,900,1000};

    cout<<"Key Present at "<<LinearSearch(arr,10,900)<<"th index"<<endl;
}
*/





// Implement BINARY SEARCH using RECURSION

#include<iostream> 

using namespace std;

int BinarySearch(int arr[],int start, int end, int key)
{
    int mid = start+(end-start)/2;

    //Base Case
    if(start>end)
        return -1;
    if(arr[mid] == key)
        return mid;
    
    if(arr[mid]>key)
        return BinarySearch(arr,start,mid-1,key);
    return BinarySearch(arr,mid+1,end,key);
}

int main()
{
    int arr[10] = {100,200,300,400,500,600,700,800,900,1000};

    cout<<"Key Present at "<<BinarySearch(arr,0,9,900)<<"th index"<<endl;
}