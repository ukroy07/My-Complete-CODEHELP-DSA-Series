

// ------------------- QUICK SORT using RECURSION --------------------

#include<iostream>

using namespace std;

int PARTITION(int arr[], int start, int end)
{
    int pivot = arr[start];

    int countPivot = 0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=pivot)
            countPivot++;
    }

    int pivotIndex = start+countPivot;
    swap(arr[pivotIndex],arr[start]);          //Placing PIVOT at right position

    //Left and right wala part sambhaal lete hai
    int i = start, j = end;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
            i++;

        while(arr[j]>pivot)
            j--;
        
        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i++],arr[j--]);
    }

    return pivotIndex;
}

void QUICKSORT(int arr[], int start, int end)
{
    //BASE CASE
    if(start>=end)
        return;

    //Partition
    int p = PARTITION(arr,start,end);

    //RECURSION
    QUICKSORT(arr,start,p-1);       //Left part sorting krenge
    QUICKSORT(arr,p+1,end);       //Right part sorting krenge
}

int main()
{
    int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6};

    QUICKSORT(arr,0,7);

    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}