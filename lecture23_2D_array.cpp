
/*
// Some key implementations of 2D array

#include<iostream>

using namespace std;

int main()
{
    //int arr[3][4];

    //taking inputs row wise
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }




    //taking inputs column wise
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    }

    //printing outputs
    cout<<"Given array is -> "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
   output->
    1 4 7 10 
    2 5 8 11 
    3 6 9 12 

    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};           //will stored row wise
    //int arr[3][4] = {{1,2,3},{5,6,7},{8,9,10}};       //will allocate 0 to each element of 4th column
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    //printing outputs
    cout<<"Given array is -> "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }




//-------------------          Q.Why do we need to specify the column size when passing a 2D array as a parameter?                           ----------------------------------------------------
                        
                               -> When it comes to describing parameters, arrays always decay into pointers to their first element.

When you pass an array declared as int Array[3] to the function void foo(int array[]), it decays into a pointer to the beginning of the array i.e. int *Array;. 

Btw, you can describe a parameter as int array[3] or int array[6] or even int *array - all these will be equivalent and you can pass any integer array without problems.

In case of arrays of arrays (2D arrays), it decays to a pointer to its first element as well, which happens to be a single dimensional array i.e. we get int (*Array)[3].

Specifying the size here is important. If it were not mandatory, there won't be any way for compiler to know how to deal with expression Array[2][1], for example.

To dereference that a compiler needs to compute the offset of the item we need in a contiguous block of memory (int Array[2][3] is a contiguous block of integers), which should be easy for pointers. 

If a is a pointer, then a[N] is expanded as start_address_in_a + N * size_of_item_being_pointed_by_a. In case of expression Array[2][1] inside a function (we want to access this element) the Array is a pointer to a single dimensional array and the same formula applies. 

The number of bytes in the last square bracket is required to find size_of_item_being_pointed_by_a. If we had just Array[][] it would be impossible to find it out and hence impossible to dereference an array element we need.

Without the size, pointers arithmetics wouldn't work for arrays of arrays. What address would Array + 2 produce: advance the address in Array 2 bytes ahead (wrong) or advance the pointer 3* sizeof(int) * 2 bytes ahead?

                  ..............     source :- stackoverflow
                  .............       link :- https://stackoverflow.com/questions/12813494/why-do-we-need-to-specify-the-column-size-when-passing-a-2d-array-as-a-parameter



}
*/





/*
//Q2. WAP to find the presence of value in the given 2D array

#include<iostream>

using namespace std;

void findPresence(int arr[][4], int target, int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
                cout<<target<<" found in "<<i+1<<"th ROW & "<<j+1<<"th COLUMN."<<endl;
        }
    }    
}

int main()
{
    int arr[3][4];

    cout<<"Enter the elements :- "<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cin>>arr[row][col];
        }
    }

    //printing outputs
    cout<<"Given array is -> "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Element to be searched for -> "<<" ";
    cin>>target;

    findPresence(arr, target, 3, 4);

    return 0;
}
*/



/*
//Q3. WRITE a program to return the row wise sum...

#include<iostream>

using namespace std;


//ROW wise sum
void PrintSum(int arr[][4], int row, int col)
{
    for(int row=0;row<3;row++)
    {
        int sum = 0;
        for(int col=0;col<4;col++)
        {
            sum+=arr[row][col];
        }
        cout<<row+1<<"th ROW SUM :- "<<sum<<endl;
    }
}



//COLUMN wise sum
void PrintSum(int arr[][4], int row, int col)
{
    for(int col=0;col<4;col++)
    {
        int sum = 0;
        for(int row=0;row<3;row++)
        {
            sum+=arr[row][col];
        }
        cout<<col+1<<"th COLUMN SUM :- "<<sum<<endl;
    }
}

int main()
{
    int arr[3][4];

    cout<<"Enter the elements :- "<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cin>>arr[row][col];
        }
    }

    //printing outputs
    cout<<"Given array is -> "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    PrintSum(arr,3,4);

    return 0;
}
*/






//WAP to find the greatest row sum and their ROW-th number

#include<iostream>

using namespace std;

//ROW wise sum
void FindLargetRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int index = 0;
    for(int row=0;row<3;row++)
    {
        int sum = 0;
        for(int col=0;col<4;col++)
        {
            sum+=arr[row][col];
            if(sum>maxi)
                maxi = sum;
                index = row;
        }
        cout<<row+1<<"th ROW SUM :- "<<sum<<endl;
    }
    cout<<index+1<<"th ROW is having maximum sum of -> "<<maxi<<endl;
}

int main()
{
    int arr[3][4];

    cout<<"Enter the elements :- "<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cin>>arr[row][col];
        }
    }

    //printing outputs
    cout<<"Given array is -> "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    FindLargetRowSum(arr,3,4);

    return 0;
}