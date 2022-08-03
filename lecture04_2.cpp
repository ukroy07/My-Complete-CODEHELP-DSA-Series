#include<iostream>

using namespace std;

int main()
{


    /*
                         *
                        **
                       *** 
                      ****
                     *****                     */
    
    /*
    int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row = row+1;
    }

    /*          ******      
                 *****
                 ****
                 ***
                 **
                 *                       */

    /*
    
    int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n-row+1)
        {
            cout<<"*";
            col=col+1;
        }
        
        int space = n-row+1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        
        
        cout<<endl;
        row = row+1;
    }

    */

   /*
   int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        // print for space
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        

        // print for first half->triangle
        int col=1;
        while(col<=row)
        {
            cout<<col;
            col=col+1;
        }

        int val2 = row-1;
        while(val2)
        {
            cout<<val2;
            val2--;
        }
        cout<<endl;
        row = row+1;
    }
    */



    ////// PRINT DABANGG PATERN---------------


   int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        
        int col=1;
        while(col<=n-row+1)
        {
            cout<<col<<" ";
            col=col+1;
        }
    
    
        // print for stars
        col=1;
        while(col<=(row-1)*2)
        {
            cout<<"*"<<" ";
            col++;
        }

        col=n-row+1;
        while(col>=1)
        {
            cout<<col<<" ";
            col--;
        }
        
        cout<<endl;
        row = row+1;
    }


}