
/*
// .........WAP to implement BINRY SEARCH......

#include<iostream>

using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        if(key>arr[mid])
        {
            start=mid+1;
        }

        if(key<arr[mid])
        {
            end=mid-1;
        }

        mid = start + (end-start)/2;

    } return -1;

}



int main()
{
    int arr[50];
    int ElemNum;
    int key;
    cout<<"Enter the number element you wanna keep in your array:- "<<endl;
    cin>>ElemNum;

    for(int i=0;i<ElemNum;i++)
    {
        cin>>arr[i];
    }

    cout<<"Given array is:- "<<" ";
    for(int i=0;i<ElemNum;i++)
    {
        cout<< arr[i] <<" ";
    }

    cout<<endl;

    cout<<"Enter the element you want to search in this array:-"<<" ";
    cin>>key;
    cout<<endl;

    if(BinarySearch(arr, ElemNum, key)==-1)
    {
        cout<<"Key is not found in the given Array.."<<endl;
    }
    else
    {
        cout<<"Key is found at " << (BinarySearch(arr, ElemNum, key)+1) <<"th Location in the given Array..."<<endl;
    }
}

*/







// ...............WAP to find the first and last occurrence of any number in the given array..........(FOLLOW BINRAY SEARCH APPROACH)........

#include<iostream>

using namespace std;

int FirstOccur(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            end = mid-1;
        }

        if(key>arr[mid])
        {
            start=mid+1;
        }

        if(key<arr[mid])
        {
            end=mid-1;
        }

        mid = start + (end-start)/2;
        
    } return ans;

}

int LastOccur(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            start = mid+1;
        }

        if(key>arr[mid])
        {
            start=mid+1;
        }

        if(key<arr[mid])
        {
            end=mid-1;
        }

        mid = start + (end-start)/2;
        
    } return ans;

}



int main()
{
    int arr[10] = {1,2,2,3,3,3,3,4,4,5};

    cout<<"The required leftmost position is:-"<<(FirstOccur(arr,10,3)+1)<<endl;

    cout<<"The required Rightmost position is:-"<<(LastOccur(arr,10,3)+1);

}
