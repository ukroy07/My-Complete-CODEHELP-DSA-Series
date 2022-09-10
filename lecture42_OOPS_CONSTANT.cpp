
#include<iostream>

using namespace std;

/*
// CONSTANT WITH POINTERS
--------------------------------------------------------------------------------------------------------------------------------
int main()
{
    int x{10};
    char y{'M'};
    int z = 100;

    const int* i = &x;        // Here we can change the value of x and y also, bcx here they are not the constant variables
    const char* j = &y; 
    i = &z;  

    x = 11;
    y = 'F';

    // *i = 20;               //Expression must be a modifiable value

    cout<<x<<" "<<y<<endl;
    cout<<*i<<" "<<*j<<endl;
}


//When the const pointer variable point to the value:-
int main()
{
    int x = 5;
    int z = 6;
 
    char y = 'A';
    char p = 'C';

    int* const i = &x;            // const pointer(i) pointing to the var x's location
    char* const j = &y;             // const pointer(j) pointing to the var y's location
 
 
    // The values that is stored at the memory location can modified
    // even if we modify it through the pointer itself
    // No CTE error
    *i = 10;
    *j = 'D';
    x = 1000;                // change the value 
    
    int s = x;                         //but cant change the location of variable
    // i = &x;              // Expression must be a modifiable value


    // CTE because pointer variable
    // is const type so the address
    // pointed by the pointer variables
    // can't be changed
    // i = &z;                    // Expression must be a modifiable value
    // j = &p;
 
    cout << *i << " and " << *j << endl;
    cout << i << " and " << j<<endl;               // in case of j, value of the variable inside it will be printed..
}


// when a constant pointer points to a constant value

int main()
{
    int x{ 9 };
    const int* const i = &x;
   
    // *i=10;  //The above statement will give CTE. Once Ptr(*i) value is assigned, later it can be modified(Error)
 
    char y{ 'A' };
    const char* const j = &y;
   
    // *j='B';   // The above statement will give CTE. Once Ptr(*j) value is assigned, later it can't be modified(Error)

    cout << *i << " and " << *j;
}

--------------------------------------------------------------------------------------------------------------------------------
*/







/*
// CONSTATNT METHOD :-
 -----------------------------------------------------------------------------------------------------------------
class TEST
{
    int  value;

    public:
    TEST(int v = 0)
    {
        value = v;
    }
 
    // We get compiler error if we add a line like "value = 100;" in this function.
    int getValue() const
    {
        return value;
    }
     
    // a nonconst function trying to modify value
    void setValue(int value) 
    {
        this->value = value;
    }
};

int main()
{
    TEST t(20);
 
    // non-const object invoking const function, no error
    cout << t.getValue() << endl;
     
    const TEST t_const(10);         // CONSTANT object
   
    // const object invoking const function, no error
    cout << t_const.getValue() << endl;
   
    // const object invoking non-const function, CTE 
    // t_const.setValue(15);
     
    // non-const object invoking non-const function, no error
    t.setValue(12);
     
    cout << t.getValue() << endl;             // NON-CONST object invoking the CONST function , NO ERROR
 
    return 0;
}
-----------------------------------------------------------------------------------------------------------------------
*/




/*
// Constant Function Parameters And Return Type:-

void foo(const int y)
{
    // y = 6;    //const value -can't be change
    cout << y;
}
 
void foo1(int y)
{
    // Non-const value can be change
    y = 5;
    cout << '\n' << y;
}

int main()
{
    int x = 9;
    const int z = 10;
   
    foo(z);
    foo1(x);
}







// for constant return type :-

const int foo(int y)           // here value of z will also change
{
    y--;
    return y;
}
 
int main()
{
    int x = 9;
    const int z = 10;
    cout << foo(x) << " " << foo(z);
}
*/




// For const return type and const parameter:-

const int foo(const int y)
{
    // y = 9; it'll give CTE error as y is const var its value can't be changed
    return y;
}

int main()
{
    int x = 9;
    const int z = 10;
    cout << foo(x) << '\n' << foo(z);
}

