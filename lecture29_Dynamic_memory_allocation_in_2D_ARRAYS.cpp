
/*
//WAP to implement dynamic memory allocation in 2D arrays

#include<iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter ROW -> "<<" ";
    cin>>m;
    cout<<"Enter COLUMN-> "<<" ";
    cin>>n;

    int** arr = new int*[m];          //arrays of m no of rows are created of int* type

    for(int i = 0;i<m;i++)          // har ek row k liye n size ki array bnaani hai
    {
        arr[i] = new int[n];
    }
    // CREATION DONE......

    //Taking inputs from the user
    cout<<"TAKING THE INPUTS FROM THE USERS ->"<<" ";
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
            cin>>arr[i][j];
    }

    //PRINTING THE INPUTS
    cout<<"PRINITING THE VALUES ->"<<endl;
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    //In stack memory, Memory will be released whenever work has been done...mtlb uss memory k kaam hone k baad stack ki memory apne aap free ho jaati hai
    // Lekin HEAP ki used memory -  hume manually free krni pdti hai


    // SO, now releasing memory from HEAP
    for(int i = 0;i<m;i++)       //sbse baad jo memory heap m allot hui hai usko sbse pahle delete krna hai
        delete [] arr[i];    // ROW wala sara array k space free ho gya

    delete []arr;         // ab array jo create hui thi starting me, wo free ho gyi -> [in line 16 me -(int** arr = new int*[m];)]
}
*/




//WAP to create the jaggered array
