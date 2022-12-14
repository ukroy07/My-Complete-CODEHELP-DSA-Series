
/*
// Implement MERGE SORT using Recursion 
----------------APPROACH - I -------------------

#include<iostream>

using namespace std;

void MERGE(int* arr, int start, int end)
{
    int mid = start+(end-start)/2;   

    int len1 = mid-start+1;
    int len2 = end-mid;

    int* first = new int[len1];
    int* second = new int[len2];

    //copy kro left wali array values ko nayi wali arrays me
    int mainArrayIndex = start;
    for(int i = 0;i<len1;i++)
        first[i] = arr[mainArrayIndex++];

    //copy kro right wali array values ko nayi wali arrays me
    mainArrayIndex = mid+1;
    for(int i = 0;i<len2;i++)
        second[i] = arr[mainArrayIndex++];

    //merge kro dono separated arrays ko (MERGE 2 SORTED ARRAYS)
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1<len1 && index2<len2)
    {
        if(first[index1] < second[index2])
            arr[mainArrayIndex++] = first[index1++];
        else
            arr[mainArrayIndex++] = second[index2++];
    }

    while(index1 < len1)        //may be len1 index1 s badi ho skti
        arr[mainArrayIndex++] = first[index1++];

    while(index2 < len2)          
        arr[mainArrayIndex++] = second[index2++];

    delete []first;
    delete []second;
}

void MERGESORT(int* arr, int start, int end)
{
    //BASE CASE
    if(start>=end)
        return;
    
    int mid = start+(end-start)/2;

    //LEFT PART SORT KARNA HAI
    MERGESORT(arr,start,mid);

    //RIGHT PART SORT KARNA HAI
    MERGESORT(arr,mid+1,end);

    //MERGE KR DO DONO PART KO
    MERGE(arr, start, end);
}


int main()
{
    int arr[10] = {20,10,30,5,100,80,15,88,90,1};

    MERGESORT(arr,0,9);
    for(int i = 0; i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
*/




// ___________MERGE SORT -  II
/*
//  ----------------APPROACH - II -------------------
#include<iostream>
using namespace std;

void merge(int a[], int s, int mid, int e)
{
    int i, temp;
    while(s<=mid && mid+1<=e)
    {
        if (a[s]<=a[mid+1])
        {
            s++;
        }
        else
        {
            temp=a[mid+1];
            for(i=mid+1; i>s; i--)
            {
                a[i]=a[i-1];
            }
            a[i]=temp;
            s++;
            mid++;
        }
    }
}

void mergesort(int a[], int s, int e)
{
    int mid=s+(e-s)/2;
    if(s>=e)
        return;
    else
    { 
        mergesort(a,s,mid);
        mergesort(a,mid+1,e);
        merge(a,s,mid,e);
    }
}

int main()
{
    int a[10]={3, 4, 8, 1, 6, 9, 2, 5, 7 ,0};
    mergesort(a,0,9);
    
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
}
*/





// INVERION-COUNT PROBLEM USING MERGE-SORT TECHNIQUE       - CODE IS DERIVED FROM GFG

//BRUTEFORCE SOLUTION
#include <bits/stdc++.h>
using namespace std;
  
int getInvCount(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
  
    return inv_count;
}
  

int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " Number of inversions are "
         << getInvCount(arr, n);
    return 0;
}


// METHOD - 2 (using MERGE SORT) - Time complexity = 0(nlogn)
/*
// C++ program to Count - Inversions in an array - using Merge Sort
#include <iostream>
using namespace std;

// This function merges two sorted arrays and returns inversion count in the arrays.
int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int inv_count = 0;
  
    i = left; // i is index for left subarray 
    j = mid; // j is index for right subarray
    k = left; // k is index for resultant merged subarray
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
  
            // this is tricky -- see above explanation/diagram for merge() 
            inv_count = inv_count + (mid - i);
        }
    }
  
// Copy the remaining elements of left subarray (if there are any) to temp 
    while (i <= mid - 1)
        temp[k++] = arr[i++];
  
    // Copy the remaining elements of right subarray (if there are any) to temp 
    while (j <= right)
        temp[k++] = arr[j++];
  
    // Copy back the merged elements to original array 
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
  
    return inv_count;
}


// An auxiliary recursive function that sorts the input array and returns the number of inversions in the array. 
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        // Divide the array into two parts and call _mergeSortAndCountInv() for each of the parts 
        mid = (right + left) / 2;
  
        // Inversion count will be sum of inversions in left-part, right-part and number of inversions in merging 
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
  
        // Merge the two parts 
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

// This function sorts the input array and returns the number of inversions in the array 
int mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

  
// Driver code
int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr, n);
    cout << " Number of inversions are " << ans;
    return 0;
}
*/