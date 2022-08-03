
//                  AUTHOR:-> UJJAWAL KUMAR
//                  User Name:-> ukroy07

// --------------------STL in cpp-----------------------

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
// ........................            1.ARRAY                 ..............

#include<iostream>
#include<array>              // we have to add this in header file to use of array by the help of STL

using namespace std;

int main()
{
    int basics[3] = {1,2,3};
    array<int,4> a={1,2,3,4};

    int size = a.size();
    
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;


    cout<<"Element at 2nd index -> "<<a.at(2)<<endl;         //array_name.at(i) is used to get the value of array present at ith index..

    cout<<"Empty or not -> "<<a.empty()<<endl;     //returns bool value(true,false) for emptyness..

    cout<<"Front Element -> "<<a.front()<<endl;     //returns the first element of the array..

    cout<<"Last element of the array -> "<<a.back()<<endl;    //returns the last element of that array..

}
*/

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
//.........................               2.VECTOR                  ......................

#include<iostream>
#include<vector>              // we have to add this in header file to use of vector by the help of STL

using namespace std;

int main()
{
    
    vector<int> v;

    vector<int> a(5,1);        // It creates a vector of size 5 and initialises all elements with 1 (useful way when we know the size of vector initially)
    cout<<"Elements of a -> "<<" ";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;

    vector<int> copy(a);        //useful when we have to create a vector same as other
    cout<<"Elements of copy vector -> "<<" ";
    for(int i=0;i<copy.size();i++)
    {
        cout<<copy[i]<<" ";
    }cout<<endl;

    int size = v.size();
    cout<<"Capacity -> "<<v.capacity()<<endl;          //returns zero as initially it is fully blank..

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;                // returns 1

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;                 // returns 2

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;                    // returns 4 bcz initially it has no space for storing 3, so it got converted to a new vector
                                                             // of size double than the previous(2) and by storing all values with previous ones too.....

    v.push_back(4);
    cout<<"Capacity -> "<<v.capacity()<<endl;                     // retruns 4

    cout<<"Size -> "<<v.size()<<endl;

    cout<<"Element at 2nd index -> "<<v.at(2)<<endl;               // element at 2nd index

    cout<<"Front Element -> "<<v.front()<<endl;         //returns first element

    cout<<"Last element of V vector -> "<<v.back()<<endl;         // returns last element

    cout<<"BEFORE POPING ->"<<" ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;

    v.pop_back();              // removes element from last position from the vector

    cout<<"AFTER POPING ->"<<" ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;


    cout<<"Before clearing the vector, it's size is ->"<<v.size()<<endl;        //returns 3
    v.clear();            // It clears the size of vector not the capacity...
    cout<<"After clearing the vector, it's size is -> "<<v.size()<<endl;

}
*/

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
//.........................                        3.Deque -> Double Ended Queue                             .....................
// It's is also a dynamic..

#include<iostream>
#include<deque>              // adding library to use DEQUE

using namespace std;

int main()
{

    deque<int> d;

    d.push_back(10);
    d.push_front(20);
    d.push_back(40);
    d.push_front(50);
    d.push_front(30);

    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    // d.pop_back();        //removes element from back..
    // cout<<"After pop -> "<<" ";
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;

    // cout<<"After POP -> "<<" ";
    // d.pop_front();       //removes element from front
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"Element at 0th index -> "<<d.at(0)<<endl;
    cout<<"Element at 1th index -> "<<d.at((d.size()-1))<<endl;      //last index element

    cout<<"Element at front -> "<<d.front()<<endl;
    cout<<"Element at back -> "<<d.back()<<endl;

    cout<<"Empty or not -> "<<d.empty()<<endl;      //to check that DEQUE is empty or not

    cout<<"Before Earse, size -> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+2);           //Deletion done from start to (start+1)th index
    cout<<"After deletion, size -> "<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    //Memory allocated remains same in the DEQUE even if deletion of element from it...

}
*/

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
//.........................                     4.LIST(BY USING DOUBLY LINKED LIST)                            .....................

#include<iostream>
#include<list>              // adding library to use LIST

using namespace std;

int main()
{

    //we can't directly access the element at ith index in LIST, we have to traverse...

    list<int> l;
    l.push_back(10);
    l.push_front(20);
    l.push_back(40);
    l.push_front(50);           //pop_front(),pop_back() also work similar to we r using in DEQUE
    l.push_front(30);

    cout<<"Given LIST is -> "<<" ";
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    // begin(),end(),empty(),back() will work accordingly as DEQUE..

    l.erase(l.begin());              //ERASE from given position
    cout<<"After ERASE -> "<<" ";
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"SIZE of LIST -> "<<l.size()<<endl;

    list<int> new_list(l);              // copying list L into new_list
    cout<<"Elements of new_list -> "<<" ";
    for(int i:new_list)
    {
        cout<<i<<" ";
    }cout<<endl;

    list<int> list1(10,100);      //initialising each 10 elements of list1 with 100
    cout<<"Elements of list1 -> "<<" ";
    for(int i:list1)
    {
        cout<<i<<" ";
    }cout<<endl;
}
*/

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
//.........................                  5. STACK                           .....................
// ---------        LAST IN FIRST OUT            -------

#include<iostream>
#include<stack>              // adding library to use STACK

using namespace std;

int main()
{
    stack<int>s;

    stack<int>u;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<"Top ELEMENT of the given stack -> "<<s.top()<<endl;

    s.pop();        //removes the top most element from the stack (i.e. 50)
    cout<<"After POP, Top ELEMENT of the given stack -> "<<s.top()<<endl;

    cout<<"Size of stack -> "<<s.size()<<endl;

    cout<<"Stack S is empty or not -> "<<s.empty()<<" "<<"AND, Stack u is empty or not -> "<<u.empty() <<endl;
    
    cout<<"Elements of stack -> "<<" ";
    // for(int i:s)                      //Won't work as it works on traversal of element..
    // {
    //     cout<<i<<" ";
    // }cout<<endl;

}
*/

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
//.........................                  6. QUEUE                          .....................
// ---------        FIRST IN FIRST OUT            -------

#include<iostream>
#include<queue>              // adding library to use QUEUE

using namespace std;

int main()
{
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // cout<<"Top element -> "<<q.top()<<endl;              //not work
    // QUEUE have FRONT but PRIORITY QUEUE have Top. why? 

    cout<<"SIZE before POP -> "<<q.size()<<endl;

    cout<<"FIRST element in QUEUE -> "<<q.front()<<endl;           //To check the front element in QUEUE

    q.pop();           //It removes the element which comes first in the QUEUE
    cout<<"after POP, FIRST element in QUEUE -> "<<q.front()<<endl;  
    cout<<"SIZE after POP -> "<<q.size()<<endl;

    cout<<"Empty or NOT-> "<<q.empty()<<endl;

}
*/

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
//.........................                  7. PRIORITY QUEUE                         .....................
// ---------        PRIORITY QUEUE similar like HEAP          -------
// DEFAULT PRIORITY QUEUE BASED ON - MAX HEAP

#include<iostream>
#include<queue>              // adding library to use QUEUE

using namespace std;

int main()
{

    priority_queue<int>maxi;           //Created MAX HEAP as a default 

    priority_queue<int,vector<int> , greater<int> > mini;          // MINI HEAP

    // OPERATIONS in MAX HEAP
    maxi.push(20);
    maxi.push(-5);
    maxi.push(10);
    maxi.push(45);
    maxi.push(1);

    cout<<"SIZE of maxi -> "<<maxi.size()<<endl;

    cout<<"TOP element of the maxi -> "<<maxi.top()<<endl;          // retuns the maximum element of HEAP

    int n = maxi.size();
    cout<<"ELEMENTS of MAXI are ->"<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";             // shows the first element of the heap
        maxi.pop();                        // Removes that one, so that it shows the 2nd one as it will be on top in the next loop
    }
    cout<<endl;                           //PRINTS the heap in decreasing order

    // OPERATIONS in MINI HEAP
    mini.push(20);
    mini.push(10);
    mini.push(30);
    mini.push(5);
    mini.push(25);

    cout<<"SIZE of mini -> "<<mini.size()<<endl;

    cout<<"TOP element of the mini -> "<<mini.top()<<endl;             //returns the smallest element from the heap

    int m = mini.size();
    cout<<"ELEMENTS of MINI are ->"<<" ";
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";             // shows the first element of the heap
        mini.pop();                        // Removes that one, so that it shows the 2nd one as it will be on top in the next loop
    }
    cout<<endl;

    cout<<"IS MINI empty -> "<<mini.empty()<<endl;        // Returns 1 bcz we pop all element in the loop traversal

}
*/

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
//.........................                  8.SET                         .....................
// ---------        UNIQUE ELEMENT STORED          -------
// IMPLEMENTATION DONE using BST(complexity O(logn))
// WE can only insert and delete values from SET, can't modify it...
//VALUES return in sorted ORDER

#include<iostream>
#include<set>              // adding library to use SET

using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(10);
    s.insert(2);
    s.insert(10);

    cout<<"Before ERASING -> "<<endl;
    for(auto i:s)           // SETS returned in sorted order with removal of all duplicate elements
    {
        cout<<i<<endl;
    }cout<<endl;

    // s.erase(s.begin());           //We should give iterator as a parameter
    set<int>::iterator it = s.begin();     // iterator start m tha
    it++;                         //bdha k 2nd position p kr diye
    s.erase(it);
    // doint this way, bcz we can't do like ---> s.erase(s.begin()+1)
    cout<<"AFTER ERASING -> "<<endl;
    for(auto i:s)           
    {
        cout<<i<<endl;
    }cout<<endl;

    cout<<"Whether 5 is present or not -> "<<s.count(5)<<endl;    //Tells whether the element is present or not...

    //       IMPORTANT           ********************************888
    set<int>::iterator itr = s.find(5);                        //It returns the reference of 5
    // cout<<"Value at itr -> " << itr <<endl;             //won't work

    // Printing values after starts from iterator's index
    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    cout<<"Is given set S is empty or not -> "<<s.empty()<<endl;

}
*/

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
//.........................                  9.MAP(Data stored in form of KEY value)                         .....................
//---------       Same key can't point to multiple values            -------
//----------         But Same values may exist for multiple keys          --------------

#include<iostream>
#include<map>              // adding library to use MAP

using namespace std;

int main()
{
    map<int, string> map1;

    map1[1] = "UJJAWAL";
    map1[2] = "ADARSH";
    map1[3] = "ROHIT";
    map1[4] = "KUNDAN";
    map1[5] = "ABHISHEK";
    map1[10] = "MOHIT";

    map1.insert({15,"SAURABH"});      // another way of inserting element in the map....
    
    cout<<"Before ERASE -> "<<endl;
    for(auto i:map1)              // shows the index value in sorted order
    {
        cout<<i.first<<" -> "<<i.second<<endl;
    }cout<<endl;
    //BUT, In place of unsorted map  , order can be random..

    cout<<"Whether 5 is present or not -> "<<map1.count(5)<<endl;     //Tells whether the element is present or not...
    cout<<"Whether -5 is present or not -> "<<map1.count(-5)<<endl;

    map1.erase(5);        //erasing 
    cout<<"AFTER ERASE -> "<<endl;
    for(auto i:map1)              // shows the index value in sorted order
    {
        cout<<i.first<<" -> "<<i.second<<endl;
    }cout<<endl;


    // IMPORTANT ********************
    // Loop chla ek particular iterator se uske baad wali value k first and second part nikaale
    cout<<"Loop me MAP ki values -> "<<endl;
    auto it = map1.find(4);             
    for(auto i=it;i!=map1.end();i++)
    {
        cout<<(*i).first<<"->"<<(*i).second<<endl;
    }cout<<endl;

}
*/

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//     ---------------                       10.ALGORITHMS                    ----------------------

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    // BINARY SEARCH by the help of STL--->>(condition is that vector should be sorted in case of BINARY SEARCH)
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout<<"Binary Search for 30 (Present or not) -> "<<binary_search(v.begin(),v.end(),30)<<endl;

    cout<<"LOWER BOUND for 40 -> "<<lower_bound(v.begin(),v.end(),40)-v.begin()<<endl;  // returns the iterator pointinf the first element in the range first to last which has value not less than the given constant value(40) (i.e. 3 in this case)
    cout<<"UPPER BOUND for 40 -> "<<upper_bound(v.begin(),v.end(),40)-v.begin()<<endl;  // returns the iterator pointing the first element in that particular range which has a value greater than than that given the constant one....

    //Rotating the vector v
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"AFTER Rotating"<<" -> ";
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //more functions
    int a=40;
    int b=55;
    cout<<"MAXIMUM between 40 and 55 -> "<<max(a,b)<<endl;
    cout<<"MINIMUM between 40 and 55 -> "<<min(a,b)<<endl;

    //swapping using function
    swap(a,b);
    cout<<"AFTER swapping the values -> "<<endl;
    cout<<" a = "<<a<<" and b = "<<b<<endl;

    //reversing any string--
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    reverse(s.begin(),s.end());
    cout<<"AFTER REVERSING, New String s is -> "<<s<<endl;

    //SORTING --> 
    vector<int> v1;
    v1.push_back(-10);
    v1.push_back(0);
    v1.push_back(25);
    v1.push_back(100);
    v1.push_back(-45);
    v1.push_back(3);
    v1.push_back(2924);
    cout<<"BEFORE SORTING "<<" -> ";
    for(int i:v1)
    {
        cout<<i<<" ";
    }cout<<endl;

    sort(v1.begin(),v1.end());

    cout<<"AFTER SORTING "<<" -> ";
    for(int i:v1)
    {
        cout<<i<<" ";
    }cout<<endl;

}