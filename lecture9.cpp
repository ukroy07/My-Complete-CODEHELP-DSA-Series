
/*
// We can initialize the array with any value by using the fill_n command 

// Example code:

#include<iostream>
using namespace std;

int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 1);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 10; i++)
    {
        cout << array[i] << " ";
    }
}

//This is one of the method and the 'for loop' can also be used
// but it is does not looks good and professional.

*/




/*
// WAP to find the maximum, minimum value and sum of all elements of  the given array..........

#include<iostream>

using namespace std;

int sumArray(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout<<"Enter the size of your array:-"<<endl;
    cin>>size;

    int arr[100];
    cout<<"Giving values to the ARRAY--> ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"All given elements of the ARRAY :--->  "<<" ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
   
    cout<<endl;

    // To finding the largest in the array..
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }

        // maximum = max(maximum,arr[i]);

        if(arr[i]<min)
        {
            min = arr[i];
        }

        // minimum = min(minimum,arr[i])
    } 
    
    cout<<" maximum element is - "<< max << endl;
    cout<<" Minimum element is - "<< min <<endl;
    
    cout<<"SUM of all elements of the array is -> "<<sumArray(arr,size);

}
*/




/*
// Implement linear search by making a function

#include<iostream>

using namespace std;

bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {2,3, 4,-10, 20, 1, 20, 97, -99, 100};

    cout<<"Enter the key to search for->"<<endl;
    int key;
    cin>>key;

    if(search(arr,10,key))
    {
        cout<<"Key is present"<<endl;
    }
    else
    {
        cout<<"Key is absent"<<endl;
    }
}

*/






// WAP to reverse an array

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

void reverse(int arr[],int size)
{
    int start = 0;
    int end = size-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<endl;
}

int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int brr[8] = {2,4,6,8,10,12,14,16};

    reverse(arr,9);
    reverse(brr,8);

    printArray(arr,9);
    printArray(brr,8);
}

