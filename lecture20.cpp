
/*
// 1.WAP to reverse any vector

#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size()-1;
    while(s<e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
} 


int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(24);
    v.push_back(30);
    v.push_back(44);
    v.push_back(50);

    cout<<"BEFORE reversing the vector -> "<<" ";
    print(v);

    vector<int> v1 = reverse(v);
    
    cout<<"AFTER reversing the vector -> "<<" ";
    print(v1);

}
*/



//Q2. Merge 2 sorted arrays in sorted order

#include<iostream>

using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i=0;
    int j=0;
    int k=0;
        
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }
    
    // if arr1.size()>arr2.size()
    while(i<n)
    {
       arr3[k++]=arr1[i++]; 
    }
    
    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[5] = {2,4,6,8,10};
    int arr2[3] = {1,3,5};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    printArray(arr3,8);


}
