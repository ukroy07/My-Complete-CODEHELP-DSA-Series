

/*
// ..............WAP to search in a sorted array......................

#include<iostream>
#include<vector>

using namespace std;

int search(vector<int> &nums, int target) 
{ 
    int s=0; 
    int e=nums.size()-1;
    
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]>=nums[0])
        {
        //left side
        if(target>=nums[s]  && target<nums[mid])
        {
            e = mid-1;
        }
        else 
        {
            s = mid+1;
        }
        }
        else
        {
        //right half
        if(target>nums[mid]  && target<=nums[e])
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        }
    }
    
    return -1;
}      

int main()
{
    vector<int> vector;
    for(int i = 1;i<=5;i++)
    {
        vector.push_back(i);
    }

    cout<<"present at "<<search(vector,4)<<"th index"<<endl;

}

*/






// ...............WAP to find the square of any integer perfectly upto any given precision..............

#include<iostream>

using namespace std;

long long int mySqrt(int x) 
{
    int s=0;
    int e=x;
    long long int mid = s+(e-s)/2;
    long long int ans=-1;
    
    while(s<=e)
    {
        if((mid*mid)==x)
            return mid;
        else if((mid*mid)<x)
        {
            ans=mid;
            s=mid+1;
        }
        else
            e=mid-1;
        
        mid=s+(e-s)/2;
    }
    
    return ans;
}


double MorePrecision(int number,int precision,int tempsol)
{
    double factor=1;
    double ans = tempsol;

    for(int i=0;i<precision;i++)
    {
        factor = factor/10;

        for(double j=ans; j*j<number; j=j+factor)
        {
            ans=j;
        }
    } 
    return ans;
}


int main()
{
    int num;
    
    cout<<"Enter any number to perform the square root of it:-";
    cin>>num;
    
    cout<<"Squre Root of "<<num<<" is:-"<<MorePrecision(num,5,mySqrt(num));
}
