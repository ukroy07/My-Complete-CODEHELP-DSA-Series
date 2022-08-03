
/*
#include<iostream>

using namespace std;

int main()
{
    int num = 5;
    num++;
    int *ptr = &num;
    cout<<"Value is -> "<< num << " or " << *ptr <<endl;            //returns 6 in both ways

    cout<< "ptr=" << ptr << endl;           //returns the address of num as it is stored in ptr
    //Address of OPERATOR -> &
    cout<<"Address of NUM is -> "<<&num<<endl;                //if not given, returns value in hexadecimal format..

    
    double d = 4.33;
    double *ptr2 = &d;

    cout<<" ADDRESS OF d :-> "<<ptr2<<endl;
    cout<<" ADDRESS OF d :-> "<<&d<<endl;
    cout<<" VALUE of d -> "<<*ptr2<<endl;

    //checking the size of pointer
    cout<<"Size of pointer ptr -> "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer ptr2 -> "<<sizeof(ptr2)<<endl;

    cout<<"Size of variable num -> "<<sizeof(num)<<endl;
    cout<<"Size of variable d -> "<<sizeof(d)<<endl;
}
*/





/*
//play with pointers
#include<iostream>

using namespace std;

int main()
{
    //POINTER to INT is created and pointing to some garbage address
    //int *ptr = 0;            //if no value is to be assigned then initialise the pointer with 0
    //cout<<*ptr;

    int i = 10;

    //same as -> int *ptr = &i;
    int *ptr = 0;
    ptr = &i;

    cout<<*ptr<<endl;
    cout<<ptr<<endl;


    int num = 10;
    int *ptr1 = &num;

    cout<<" Before incrementation->"<<*ptr1<<endl;
    (*ptr1)++;
    cout<<" AFTER incrementation->"<<*ptr1<<endl;
    cout<<" AFTER incrementation->"<<num<<endl;



    //copying one pointer to another one
    int num2 = 15;
    int *ptr2 = &num2;
    int *ptr3 = ptr2;
    cout<<*ptr3<<endl;           //returns 15
    cout<<ptr2<<endl;
    cout<<ptr3<<endl;

}
*/



/*
//play with pointers
#include<iostream>

using namespace std;

int main()
{
    int num = 100;
    int *ptr = &num;
    int *ptr2 = ptr;
    //int &num = 1000;            //ERROR - conflicting declaration 'int& num 
    
    // cout<<*ptr<<endl;
    // cout<<*ptr2<<endl;


    //POINTER ARITHMETIC
    int i = 1000;
    int *pt = &i;
    cout<<(*pt)++<<endl;       //returns 1000 not 1001
    cout<<*pt<<endl;     //returns 1001
    *pt = *pt+1;
    cout<<*pt<<endl;

    cout<<"before pt -> "<<pt<<endl;         //0x40b3bffd70
    pt=pt+1;            //moves to the next location and returns the value stored
    cout<<"AFTER (pt+1) -> "<<pt<<endl;         //0x40b3bffd74 (moves 4 byte) -> moves to next element   
}
*/


/*
// CODINGNINJAS POINTERS MCQ
#include<iostream>

using namespace std;

int main()
{
    // ARRAY and POINTERS - VI
    // char b[] = "xyz";
    // cout<<"First element of b -> "<<b[0]<<endl;
    // char *c = &b[0];
    // cout << *c << endl;
    // cout<< c << endl;        // returns xyz -> c stores the address of start of array b (and not of it’s values). So the entire array is printed when c is printed.

    //CHARACTER and POINTERS - I
    char s[] = "Hello";
    char *p = s;
    cout<<p;        // returns Hello
}
*/



/*
#include <iostream>

using namespace std;

int main()
{
  char arr[20];
  int i;
  
  for(i = 0; i < 10; i++) 
  {

    *(arr + i) = 65 + i;
  }

  *(arr + i) = '\0';
  cout << arr;                 //ABCDEFGHIJ
  return 0;
}
*/



/*
#include <iostream>

using namespace std;

int main ()
{

    int numbers[5];
    int * p;
    p = numbers; 
    *p = 10;          //10 is assigned to numbers[0]
    cout<<numbers[0]<<endl;
    //cout<<p<<endl;        //0x3bb6dff9e0 -> returns the address of numbers[0]
    
    p = &numbers[2]; 
    *p = 20;
    cout<<numbers[2]<<endl;
    //cout<<p<<endl;          //0x3bb6dff9e8 -> returns the address of numbers[2]
  
    p--;                  // pointer shifts to backward - means points to numbers[1]
    *p = 30;
    cout<<p<<endl;          //0xf3667ffbf4 -> returns the address of numbers[1] 
    cout<<numbers[1]<<endl;       // returns the value at numbers[1]

    p = numbers + 3;          //pointer goes to 3rd index
    *p = 40;                   // value at numbers[3]  = 40

    p = numbers;
    *(p+4) = 50;               // value at number[4] = 50
  
  for (int n=0; n<5; n++) 
  {
     cout << "numbers["<<n<<"] = "<< numbers[n] <<endl;
  }
  
  return 0;
}
*/



/*
#include<iostream>

using namespace std;

int main() 
{
  char st[] = "ABCD";

  cout << st[0] << "  " << *(st)+0 <<"  "<< *(0+st) << "  "<< 0[st]<<endl;              // returns A 65 A A

  for(int i = 0; st[i] != '\0'; i++) 
  {
    cout << st[i] << "  " << *(st)+i << "  " << *(i+st) << "  " << i[st] << endl;
  }
}
*/


/*
#include <iostream>

using namespace std;

void fun(int a[]) 
{
    cout << a[0] << " ";
}

int main()
{

    //   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    //   float *ptr1 = &arr[0];
    //   float *ptr2 = ptr1 + 3;          //pointer shifts right by 3 elements
    //   cout<<*ptr1<<endl;                //returns 12.5
    //   cout<<*ptr2<<endl;                 //returns 90.5
    //   cout<<ptr2<<endl;                 //    0x185dfffb5c
    //   cout<<ptr1<<endl;                 //    0x185dfffb50
    //   cout<< ptr2 - ptr1;                //    3
    //   return 0;

    int a[] = {1, 2, 3, 4};
    cout<<a<<endl;           
    cout<<a+1<<endl;            
    cout<<a+2<<endl;           
    cout<<a+3<<endl;           
    cout<<a+4<<endl;          
    cout<<a+5<<endl;

    fun(a + 1);
    fun(a + 2);
    fun(a + 3);
    fun(a + 4);
    fun(a + 5);

    //cout << a[0];
}
*/



/*
#include<iostream>

using namespace std;

void wrongswap (char *x, char *y)              //this function just changes the local pointer variables and the change are not reflected outside the function..
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "geeksquiz";
   char *y = "geeksforgeeks";
   char *t;
   cout<<x<<" "<<y<<endl;
   wrongswap(x, y);                                
   cout<<x << " "<<y<<endl;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}
*/




/*
#include <iostream>
using namespace std;
void Q(int z)
{
    cout<<"In Q function -> "<<endl;
    z += z;
    cout<<z << endl<<endl;                //returns 14
}

void P(int *y) 
{
    cout<<"In P function -> "<<endl;
    int x = *y + 2;
    Q(x);
    *y = x - 1; 
    cout<<x << endl<<endl;         //returns 7
}

int main()
{
    int x = 5;
    P(&x);
    cout<<x;                     // returns 6 as it is back with the value returned by P(&x)
    return 0;
}
*/




/*
#include <iostream>

using namespace std;

int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    cout<<**ppz<<endl;            //returns 5
    z = **ppz;
    *py += 2;
    y = *py;
    cout<<y<<endl;                //returns 7
    x += 3;
    cout<<x<<endl;                //returns 7
    return x + y + z;
}

int main() 
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);             // before going to function -> 
    cout<<*b<<endl;            // returns value of c = 4       note :- (b = some address)
    cout<<*a<<endl;           // returns *a = b = some address  
    cout<<**a<<endl;           //returns **a = *(*a) = *(b) = c = 4
    return 0;
}
*/