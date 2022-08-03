
/*
// LEETCODE Q78. Given an integer array nums of unique elements, return all possible subsets (the power set).

// ONLY REQUIRED FUNCTIONS....... 

class Solution 
{
    private:
        void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans)
        {
            //BASE CASE
            if(index>=nums.size())
            {
                ans.push_back(output);
                return;
            }
            
            //exclude
            solve(nums,output,index+1,ans);
            
            //Include
            int element = nums[index];
            output.push_back(element);
            solve(nums,output,index+1,ans);
        }
    
    public:
        vector<vector<int>> subsets(vector<int>& nums) 
        {
            vector<vector<int> > ans;
            vector<int> output;

            int index = 0;
            solve(nums,output,index,ans);
            return ans;       
        }
};
*/




//CODESTUDIO Q. Find all NON-EMPTY possible subsequences of a STRING

// FUNCTIONS ONLY....  -- same as first

#include<iostream>
#include<vector>

using namespace std;

void solve(string str,string output, int index,vector<string> &ans)
{
    //Base Case
    if(index>=str.length())
    {
        if(output.length()>0)                      // In Q, It's given that Empty String will not be Considered..
        {
            ans.push_back(output);           
        }            
        return; 
    }
    
    //exclusion
    solve(str,output,index+1,ans);
    
    //Inclusion
    char element = str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}


vector<string> subsequences(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str,output,index,ans);
	return ans;
}

int main()
{
    string str = "abc";
    vector<string> solution = subsequences(str);

    for(int i=0; i<solution.size();i++)
    {
        cout<<solution[i]<<" ";                          // c b bc a ac ab abc
    }
}




