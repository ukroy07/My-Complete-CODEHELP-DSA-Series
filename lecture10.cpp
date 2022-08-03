
/*
// -----------------------WAP to swap the alternate elements of an given array...

#include<iostream>

using namespace std;

void printArray(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void AlterSwap(int arr[],int size)
{
    int start = 0;
    while(start<size)
    {
        if(start+1<size)
        {
            swap(arr[start],arr[start+1]);
        }
        start+=2;
    }
}

int main()
{
    int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    int brr[9] = {1,2,3,4,5,6,7,8,9};

    AlterSwap(arr,10);
    AlterSwap(brr,9);

    printArray(arr,10);
    printArray(brr,9);
}

*/



/*
// ---------------------sorting 0 1

#include<iostream>

using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void sort01(int arr[],int size)
{
    int left=0;
    int right=size-1;

    while(left<right)
    {
        if(arr[left]==0)
        {
            left++;
        }

        else if(arr[right]==1)
        {
            right--;
        }

        else
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[20] = {1,0,0,1,1,1,0,1,0,1,0,1,0,0,0,1,0,1,1,0};

    sort01(arr,20);

    printArray(arr,20);
}

*/




// ----------------------SORTING 0,1,2....................()

#include<iostream>

using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void sort012(int arr[],int n)
{
    int count0 = 0, count1 = 0, count2 = 0;
    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 0)
            count0++;
        if (arr[i] == 1)
            count1++;
        if (arr[i] == 2)
            count2++;
    }
 
    // Putting the 0's in the array in starting.
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
        
     
    // Putting the 1's in the array after the 0's.
    for (int i = count0; i < (count0 + count1); i++)
    {
         arr[i] = 1;
    }
       
     
    // Putting the 2's in the array after the 1's
    for (int i = (count0 + count1); i < n; i++)
    {
       arr[i] = 2; 
    }
}

int main()
{
    int arr[20] = {1,0,2,1,1,2,0,1,0,1,2,1,0,0,2,1,0,1,2,0};

    sort012(arr,20);

    printArray(arr,20);
}
