

/*
// INTEGER ARRAYS AND POINTERS

#include<iostream>

using namespace std;

int main()
{

    int brr[10] = {10,20,30,40,50,60,70,80,90,100};

    cout<<"1. address of arr[0] :- "<<arr<<endl;                  // Array_name returns the address of arr[0] itself
    cout<<"2. address of arr[0] :- "<<&arr[0]<<endl;              // returns same

    cout<<"3. arr[0] -> "<<*arr<<endl;          //returns the value present at 0th index of the array
    cout<<"4. arr[0] -> "<<arr[0]<<endl;

    cout<<"5. arr[1] :-"<<*arr+1<<endl;            //value at arr[0]+1
    cout<<"6. arr[2] :-"<<*arr+2<<endl;            // arr[0]+2
    cout<<"7. arr[2] :-"<<(*arr)+2<<endl;
    

    cout<<"8. arr[1] -> "<<*(arr+1)<<endl;     //returns the value of arr[1]      
    cout<<"9. arr[9] -> "<<*(arr+9)<<endl; 
      //////////////////////////////////////////////////////////////////////

    int i = 3;
    cout<<" i[arr] -> "<<i[arr]<<endl;
    cout<<" *(i+arr) -> "<<*(i+arr)<<endl;

    int temp[10];
    cout<<"Size of temp -> "<<sizeof(temp)<<endl;               //10*4

    int *ptr = &temp[0];
    cout<<"size of pointer -> "<<sizeof(ptr)<<endl;           //always returns 8

   int arr[10] = {100,200,300,400,500};

    //all three returns the same value as the address of 0th index of given array
   cout<<&arr[0]<<endl;
   cout<<&arr<<endl;
   cout<<arr<<endl;
   
   int *ptr = &arr[0];
   cout<<&ptr[0]<<endl;             // address of first element of the given array
   cout<<&ptr<<endl;               // address of pointer block
   cout<<ptr<<endl;               // address of first element of the given array

   // arr = arr+1;             can't change the size of given array

   cout<<ptr+1<<endl;       //it doesn't change the value of p, basically it is pointing to the next block in case of POINTER

}
*/




/*
//PLAY WITH CHARACTER ARRAY AND POINTERS

#include<iostream>

using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};
    char brr[6] = "abcde";

    cout<<arr<<endl;           //prints the address of 1st location
    cout<<brr<<endl;          //prints the whole array

    char *c = &brr[0];
    
    //////////////////// ATTENTION HERE
    cout<<c<<endl;              //retrurns the whole content of array -> abcde
    cout<<*c<<endl;             //prints the first value of char array

    cout<<c+1<<endl;         // prints the whole array after the first index -> bcde
    cout<<c+2<<endl;         // -> cde
    cout<<c+3<<endl;         // -> de
    cout<<c+4<<endl;         // -> e
    cout<<c+10<<endl;   

    char temp = 'z';
    char * c1 = &temp;
    cout<<c1<<endl;         // jab tk temp m pade hue character k baad wale character k baad tk space ni milta 
                            // waha tk sara value iss pointer k madad s print hoga

    char *p = "abcdefg";             // aise kvi ni krna hai

}
*/



/*
// PLAY with FUNCTIONS and POINTERS

#include<iostream>

using namespace std;

void print(int *p)                 // Pass by Value
{
    cout<<"In the function -> "<<" ";
    cout<<*p<<endl;           
}

void update(int *p)
{
    //p = p+1;
    //cout<<"Inside update -> "<<p<<endl;         //0xf6f53ff848 
    *p = (*p)*10;  
}

int main()
{
    int value = 10;
    int *p = &value;

    // print(p);
    cout<<"Before "<<p<<endl;              //0xf6f53ff844      
    update(p);
    cout<<"After "<<p<<endl;              // WOn't change the value of address that is p but It will change the value of p in function's value of p
                                        //0xf6f53ff844

                                        //But we can change the value of that variable by the help of that pointer by passing in the given function

    cout<<"After the function call, *p ->" <<*p<<endl;          // So, It returns 100(*p*10 = 10*10)

}
*/








//MERGING

#include<iostream>

using namespace std;

int getSum(int *arr, int n)              // HERE the array is not passed, actually a pointer is passed -> int getSum(int arr[], int n)
{
    cout<<"Size of ARRAY in getSum FUNCTION ->"<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0;i<n;i++)
        sum+=i[arr];               // sum = sum+arr[i]
    
    return sum;
}

int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};

    int *ptr = &arr[0];

    cout<<"Size of ARRAY in main ->"<<sizeof(arr)<<endl;
    cout<<getSum(arr,10)<<endl;

    cout<<getSum(arr+3,7);          //benefit of POINTERS
}