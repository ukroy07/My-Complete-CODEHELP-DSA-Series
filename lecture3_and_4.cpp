
#include<iostream>

using namespace std;

int main()
{

            /*int a;
            cout<<"Enter the value of a:-"<<endl;
            cin>>a;

            if(a>0)
            {
                cout<<"a is +ve";
            }
            else if(a<0)
            {
                cout<<"a is -ve";
            }
            else
            {
                cout<<"a is Zero";
            }*/


    // detect whether the given character is upper case, lower case or numeric.
                /*
                char ch;
                cout<<"Enter the character value of a:-"<<endl;
                cin>>ch;

                if(ch>=48 && ch<=57)
                {
                    cout<<"Given character is numeric.";
                }
                else if(ch>=65 && ch<=90)
                {
                    cout<<"Given character is Capital Alphabetic.";
                }
                else if(ch>=97 && ch<=122)
                {
                    cout<<"Given character is Small Alphabetic.";
                }
                else
                {
                    cout<<"Some Special Character";
                }
                */


   // find sum of all even numberes present behind a given number.

            /*
            int n;
            cout<<"Enter the number :"<<endl;
            cin>>n;

            int i=2;
            int sum=0;
            while(i<=n)
            {
                sum+=i;
                i=i+2;
            }

            cout<<"Sum of all even integers in between " <<n<<" number is:- "<<sum<<endl;
            */




  /*print star pattern like---            *****
                                          *****
                                          *****
                                          *****
                                          *****

  */

    /*
            int n;
            cout<<"Enter the number of rows or columns:-"<<endl;
            cin>>n;

            int i=1;

            while(i<=n)
            {
                int j=1;
                while(j<=n)
                {
                    cout<<"*";
                    j++;
                }
                cout<<endl;
                i++;
            }
    */

    
    
    /*                    4321
                          4321
                          4321
                          4321                        */


    /*
            int n;
            cout<<"Enter number:-"<<endl;
            cin>>n;

            int i=1;

            while(i<=n)
            {
                int j=1;
                while(j<=n)
                {
                    cout<<n-j+1;
                    j++;
                }
                cout<<endl;
                i++;
            }
    
    */


    /*        int n;
            cout<<"Enter number:-"<<endl;
            cin>>n;

            int i=1;
            int count = 1;
            while(i<=n)
            {
                int j=1;
                while(j<=i)
                {
                    cout<<count<<" ";
                    j++;
                    count++;
                }
                cout<<endl;
                i++;
            }

    */


    /*
                         1 
                         2 3 
                         3 4 5 
                         4 5 6 7
                         5 6 7 8 9
   int n;
   cin>>n;

   int row=1;
   while(row<=n)
   {
       int col=row;
       while(col<row*2)
       {
           cout<<col<<" ";
           col=col+1;
        }
        cout<<endl;
        row = row+1;
   }

   */


    /*
                         A A A A A
                         B B B B B 
                         C C C C C 
                         D D D D D
                         E E E E E                     */
   
   /*
   int n;
   cin>>n;

   int row=1;
   while(row<=n)
   {
       int col=1;
       while(col<=n)
       {
           char ch = 'A'+row-1;
           cout<<ch;
           col=col+1;
        }
        cout<<endl;
        row = row+1;
   }

   */




  /*
                         A 
                         B C
                         C D E 
                         D E F G
                         E F G H I                     */
   
   /*
   int n;
   cin>>n;

   int row=1;
   while(row<=n)
   {
       int col=1;
       while(col<=row)
       {
           char ch = 'A'+row+col-2;
           cout<<ch;
           col=col+1;
        }
        cout<<endl;
        row = row+1;
   }

   */



  /*
                         *
                        **
                       *** 
                      ****
                     *****                     */
   
   
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

}