

// WAP to solve the book allocation problem discussed in lecture-15 of love BABBAR's DSA series.......

// key points to remember - Maximum number of pages assigned is minimum...
   
#include<iostream>
#include<vector>

using namespace std;

bool isPossible(vector <int> arr, int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;

    for(int i=0;i<n;i++)
    {
        if(pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }

        else
        {
            studentcount++;
            
            if( studentcount > m || arr[i] > mid )
            {
                return false;
            }

            pagesum = arr[i];
        }
    }

    return true;
}

int allocateBooks(vector<int>arr, int n, int m)
{
    int s = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;              // To find the solution of minimum....(go to left part)
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }

        mid = s+(e-s)/2;
    }

    return ans;
}


int main()
{
    vector<int>arr;
    int n;
    int m;

    int studentcount = 1;

    cout<<"Enter the number of books :- "<<endl;
    cin>>n;

    for(int i=10;i<=(n*10);i+=10)
    {
        arr.push_back(i);
    }

    cout<<"Enter the pages containing in each books - "<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Enter number of available students :- "<<" ";
    cin>>m;

    cout<<"Total number of pages available for 1st student:-"<<allocateBooks(arr, n, m);

}



