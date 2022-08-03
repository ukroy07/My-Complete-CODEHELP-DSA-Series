
/*
//Implementing double pointers

#include<iostream>

using namespace std;

//play with functions and pointers
void update(int **p2)
{
    //p2 = p2+1;             // NO CHANGE - Update is to change the position of address of p1(by pass by reference)

    //*p2 = *p2 + 1;         //change in the address value of p1

    //**p2 = **p2 + 1;         // value changes from 100 to 101

    //***p3 = ***p3 + 1;
}


int main()
{
    int value = 100;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;

    int ***ptr3 = &ptr2;

    // cout<<"Value = "<<value<<endl;
    // cout<<"ptr1 = "<<ptr1<<endl;
    // cout<<"*ptr1 = "<<*ptr1<<endl;
    // cout<<"ptr2 = "<<ptr2<<endl;
    // cout<<"*ptr2 = "<<*ptr2<<endl;
    // cout<<"ptr3 = "<<ptr3<<endl;
    // cout<<"*ptr3= "<<*ptr3<<endl;

    // cout<<"**ptr2 = "<<**ptr2<<endl;
    // cout<<"***ptr3 = "<<***ptr3<<endl;

    // cout<<"&Value = "<<&value<<endl;

    cout<<"Before function call - "<<endl;
    cout<<"Value = "<<value<<endl;
    cout<<"ptr1 = "<<ptr1<<endl;
    cout<<"ptr2 = "<<ptr2<<endl;
    cout<<"ptr3 = "<<ptr3<<endl;

    update(ptr2);

    cout<<endl<<"After function call - "<<endl;
    cout<<"Value = "<<value<<endl;
    cout<<"ptr1 = "<<ptr1<<endl;
    cout<<"ptr2 = "<<ptr2<<endl;
    cout<<"ptr3 = "<<ptr3<<endl;

}
*/



/*
#include<iostream>

using namespace std;

int main()
{

    int arr[]= {11,21,31,41};

    int *ptr = arr++;          //Increment will not be done -> as arr must be an modifiable variable

    cout<<*ptr<<endl;
}
*/