
/*
//Q1.Implementation of CHAR ARRAYS

#include<iostream>

using namespace std;

int main()
{

    char name[30];

    cout<<"ENTER YOUR NAME :- "<<" ";
    cin>>name;

    cout<<"Your Name is :-"<<name;          //can't print Ujjawal Kumar
    //execution is stopped for space( ), tab(\t), and ENTER
    // '\0' -> NULL CHARACTER
}
*/


/*
//Q2. WAP to calculate the length of string
#include<iostream>

using namespace std;

int findLength(char name[])
{
    int count = 0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[] = "UJJAWAL";
    cout<<"Length of given char array is -> "<<findLength(name);
}
*/



/*
//Q3. WAP to Reverse a string
#include<iostream>

using namespace std;

void reverse(char name[],int n)
{
    int i = 0;
    int j = (n-1);
    while(i<j)
    {
        swap(name[i++],name[j--]);
    }
}

int findLength(char name[])
{
    int count = 0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[] = "UJJAWAL";
    cout<<"Length of given char array is -> "<<findLength(name)<<endl;
    cout<<"Before Reversing, String is -> "<<name<<endl;
    reverse(name,findLength(name));
    cout<<"After Reversing, String is -> "<<name;
}
*/



/*
//Q4. WAP to check palindrome

#include<iostream>

using namespace std;

bool checkPalindrome(char name[], int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(name[start]!=name[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }

    return 1;
}
// HERE, Cases are CASE SENSITIVE

int findLength(char name[])
{
    int count = 0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[] = "ALAMALA";
    cout<<"Whether "<<name<<" is Palindrome or NOT -> "<<checkPalindrome(name,findLength(name));
}
*/




/*
//Q5. WAP to convert the given string or CHARACTER from upper to lower case and VICE VERSA
// OBSERVE SOME KEY DIFFERENCE BETWEEN CHAR ARRAY and STRING

#include<iostream>

using namespace std;

char ToLower(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

char ToUpper(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'a' + 'A';
        return temp;
    }
}

int findLength(char name[])
{
    int count = 0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
    
string StringToLower(char name[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            
        }
        else
        {
            char temp = name[i] - 'A' + 'a';
            name[i]=temp;
        }
    }
    return name;   
}

string StringToUpper(char name[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(name[i] >= 'A' && name[i] <= 'Z')
        {
            
        }
        else
        {
            char temp = name[i] - 'z' + 'Z';
            name[i]=temp;
        }
    }
    return name;   
}

// for - Not CASE Sensitive
bool checkPalindrome(char name[], int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(ToLower(name[start])!=ToLower(name[end]))                 
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }

    return 1;
}

int main()
{
    char ch1 = 'A';
    char ch2 = 'b';
    cout<<ch1<<" in lower case -> "<<ToLower(ch1)<<endl;
    cout<<ch2<<" in lower case -> "<<ToLower(ch2)<<endl;
    cout<<ch2<<" in Upper case -> "<<ToUpper(ch2)<<endl;
    cout<<ch1<<" in Upper case -> "<<ToUpper(ch1)<<endl;

    char name[] = "UJJAWALKumAr";
    cout<<name<<" in Lower Case -> "<<StringToLower(name, findLength(name))<<endl;

    char city[] = "HyDeRaBaD";
    cout<<city<<" in Upper Case -> "<<StringToUpper(city, findLength(city))<<endl;

    char name1[] = "UjjAwaLAWaJJu";

    cout<<"Check Whether "<<name1<<" is Palindrome or not -> "<<checkPalindrome(name1,findLength(name1))<<endl;   

    //Some clarifications on STRING vs CHAR ARRAY
    string str = "My Name is UJJAWAL KUMAR.";
    string str2 = "KUNDAN BHAIYA IS A GOOD BOY.";
    cout<<"Size of str -> "<<str.size()<<endl;        //Returns 25 [counts the space( ) too]
    cout<<"4th position of str -> "<<str.at(3)<<endl;
    cout<<"Length of str -> "<<str.length()<<endl;

    cout<<"Elements of str -> "<<" ";
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }cout<<endl;

    cout<<"Last character of str -> "<<str.back()<<endl;
    str.insert(25,str2);           // Iterator shows the starting index of 2nd string to be inserted......
    cout<<"Elements of str after inserting -> "<<" ";
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }cout<<endl;
}
*/








// GFG Q -> MAximum Occurring character in the given string

#include<iostream>

using namespace std;

char getMaxOccurrenceChar(string s)
{
    int arr[26] = {0};
    int number = 0;

    //create an array of count of each character
    for(int i=0;i<s.length();i++)
    {
        int number = 0;
        int ch = s[i];
            
    /*    //for lowercase
        if(ch >= 'a' && ch <= 'z')
            number = ch-'a';
        else
            number = ch-'A';            */
        
        number = ch-'a';
        arr[number]++;
    }

    //finding the maximum occurrence
    int maxi = -1, ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a'+ans;    
}


int main()
{
    string str = "daddy";
    cout<<"Maxium occurrence -> "<<getMaxOccurrenceChar(str);
}