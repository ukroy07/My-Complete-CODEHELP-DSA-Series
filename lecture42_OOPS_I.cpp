

//                                 ----------------------               OOPS CONCEPT                    --------------------

/*
// 1. Intro to CLASS and OBJECT

#include<iostream>
#include "lecture42_HeroClass.cpp"          //Accessing class from another cpp file that is lecture42_heroClass.cpp

using namespace std;

//Creating a class
class ActionHero
{
    //Properties of CLASS
    char name[100];
    int health = 20;
    char level;

};


int main()
{
    Hero Hrithik;              //Craeting an Object class Hero
    cout<<"Size of Hrithik -> "<<sizeof(Hrithik);          // 100+4+4 = 108 (why 4 taken for char, should be 1 n - concept of PADDING, Greedy Allignment)

    //-------> If CLASS is blank then It's OBJECT size is 1 not 0 (So, This 1 byte is given for identification of CLASS)


    // Accessing the properties of class by the object created by (.) Dot Operator
    ActionHero Akshhay;
    
    // cout<<"Health of Akshhay is -> "<<Akshhay.health<<endl;             //not acceptable bcz health is private member by default
    // cout<<"level of Akshhay is -> "<<Akshhay.level<<endl;             //level is private member by default

}
*/



/*
//2. WAP to demonstrate All the three  ACCCESS modifier

#include<iostream>

using namespace std;


// ----------------------    [PUBLIC]   ---------------------------------
class CIRCLE
{
    public:
        double radius;

        double Area()
        {   
            return 3.14*radius*radius;
        }
};
//-----------------------------------------------------------------------



//---------------------------        [Private]            ---------------------
class CIRCLE
{
    private:
        double radius;

    public:
        double Area(double r)
        {
            radius = r;
            return 3.14*radius*radius;
        }
};
//-----------------------------------------------------------------------------




//------------------------           [Protected]               ------------------
class Parent
{
    protected:
        int Id_protected;
};

class Child : public Parent
{
    public:
        void setId(int id)         
        {
            Id_protected = id;
        }

        void DisplayId()            
        {
            cout<<"ProtectedId is -> "<<Id_protected<<endl;
        }
};


int main()
{
    Child Hemant;
    Hemant.setId(18);
    Hemant.DisplayId();
}

*/



/*
// 3. USE of Getter Setter in case of Private member to use it outside of class(ex - above explanation also shows this)
// Static and Dynamic allocation also...

#include<iostream>

using namespace std;

class hero
{
    private:
        int health;

    public:
        void setHealth(int h)           //setter function
        {
            health = h;
        }

        int getHealth()             //getter function
        {
            return health;
        }
};

int main()
{
    // Static allocation
    // hero Ujjawal;
    // cout<<" Initially, Health -> "<<Ujjawal.getHealth()<<endl;

    // Ujjawal.setHealth(22);
    // cout<<" finally, Health -> "<<Ujjawal.getHealth()<<endl;  

    //------------------------------------------------------------

    // Dynamic Allocation
    hero *Ujjawal = new hero;
    cout<<" Initially, Health -> "<<(*Ujjawal).getHealth()<<endl;           //retruns garbage value

    (*Ujjawal).setHealth(22);
    cout<<" finally, Health -> "<<(*Ujjawal).getHealth()<<endl; 


    // -------- OR  ---------    
    cout<<" Initially, Health -> "<<Ujjawal->getHealth()<<endl;           //retruns garbage value

    Ujjawal->setHealth(24);
    cout<<" finally, Health -> "<<Ujjawal->getHealth()<<endl;
}
*/





/*
// 4. CONSTRUCTOR and DESTRUCTOR
// ..... PARAMETERISED CONSTRUCTOR
//.... USE of This Keyword

#include<iostream>

using namespace std;

class HERO
{
    private:
        int health;
    public:
        HERO()             // Constructor name is same as CLASS
        {
            cout<<"Hey Ujjawal, Constructor Called."<<endl;
        }

        // HERO(int health)           // CONCEPT of PARAMETRIZED CONSTRUCTOR 
        // {
        //     health = health;      //If we do like this, then the value which can as a parameter will be changed to itself(by it's own value)
        // }

        //But, WE want to access the value of health which is in private that is health 
        // AND the parameter which come may be of same name - then 
        // We use this keyword

        HERO(int health)         // PARAMETRIZED constructor    
        {
            cout<<this<<endl;
            this->health = health;         // THis acts a pointer to the object of class created
        }

        int getHealth()             //getter function
        {
            return health;
        }


};

int main()
{
    HERO ujjawal(25);          // STATICALLY object CREATED
    // WHEN we create an object, AFTER that constructor will be called automatically..

    HERO *UJJAWAL = new HERO(30);

    cout<<ujjawal.getHealth()<<endl;
    cout<<"ADDRESS of ujjawal object ->"<<&ujjawal<<endl;

    // FLOW OF CODE - HERO(int health) -> HERO() -> int gethealth() -> address wala line pe

    // If we create a construtor manually, then the default constructor created automatically will get deleted.

}
*/




/*
//COPY CONSTRUCTOR

#include<iostream>

using namespace std;

class HERO
{
    private:
        int health;
        char gender;
    public:

        HERO(int health, char gender)       
        {
            this->health = health;      
            this->gender = gender;
        }

        //Manually create v kr skte hai copy constructor ko
        HERO(HERO& temp)          // If we use pass by value approach, to infinite loop m fasse reh jayenge
        {
            cout<<"Copy constructor called"<<endl;
            this->health = temp.health;
            this->gender = temp.gender;
        }

        void  getHealth()             //getter function
        {
            cout<<health<<" "<<gender<<endl;
        }
};

int main()
{
    HERO saurav(22,'M');
    saurav.getHealth();

    //COPY constructor
    HERO mohit(saurav);        // mohit having same properties and functions as saurav
    mohit.getHealth();

}
*/




/*
//----------         SHALOW COPY             ---------

#include<iostream>
#include"string.h"

using namespace std;

class HERO
{
    private:
        int health;
        char gender;
        char *name;        // Don't use like    ---     name[], so *name will be dynamically functional
    public:

        HERO()             // default constructor is used to SHALLOW copy
        {
            cout<<"Default Simple CONSTRUCTOR called"<<endl;
            name = new char[100];        //Dynamically allocation
        }

        HERO(int health, char gender)          // PARAMETRIZED constructor is used in DEEP copy
        {
            this-> health = health;
            this-> gender =  gender;
        }

        void setHealth(int h)           
        {
            health = h;
        }

        void setGender(char abc)
        {
            gender = abc;
        }

        void setName(char name[])
        {
            strcpy(this->name,name);
        }

        void Print()
        {
            cout<<"[ GENDER :-> "<<gender<<" ] [ Health :-> "<<health<<" ] [ Name :-> "<<name<<" ]"<<endl;
        }
};

int main()
{
    HERO Ujjawal;

    Ujjawal.setGender('M');
    Ujjawal.setHealth(22);
    char name[10] = "Ujjawal";
    Ujjawal.setName(name);

    Ujjawal.Print();
    
    // -----------------------------------------------------------------------------------------
    //USE default copy construtor
    // HERO Mohit(Ujjawal);
    // HERO mohit=Ujjawal;         // BOTH ways r right
    HERO mohit(Ujjawal);        
    mohit.Print();
    
    char name2[10] = "Mohit";
    mohit.setName(name2);            // I have changed the mohit's name only

    mohit.Print();
    Ujjawal.Print();     //But while printing, Ujjawal's name is also changed..

    // THIS is an example of SHALLOW COPY
    // SO, bcz of POINTER, changes will occur in both if we change the value of one's name 
               // bcz both Ujjawal's and Mohit's name will point to the same address value.
    //----------------------------------------------------------------------------------------

}
*/







//          -----            DEEP COPY        -----------

// ek JHALAK -> COPY assignment operator                   iski v

#include<iostream>
#include"string.h"

using namespace std;

class HERO
{
    private:
        int health;
        char gender;
        char *name;      
    public:

        static int TimetoComplete;          //Static member function ko acccess krne k liye object bnaane ki jrurat ni hoti hai

        HERO()            
        {
            cout<<"Default Simple CONSTRUCTOR called"<<endl;
            name = new char[100];       
        }

        HERO(int health, char gender)          
        {
            this-> health = health;
            this-> gender =  gender;
        }

        HERO(HERO& temp)               // whole allocation of temp will be in different location now
        {
            char *ch = new char[strlen(temp.name)+1];
            strcpy(ch,temp.name);
            this-> name = ch;           // HERE we have copied the name but the location or address will be different
            //SO, If we change the name of temp, the It will change of the temp only 
            // THIS is DEEP COPY

            this-> health = temp.health;
            this-> gender = temp.gender;
        }

        void setHealth(int h)           
        {
            health = h;
        }

        void setGender(char abc)
        {
            gender = abc;
        }

        void setName(char name[])
        {
            strcpy(this->name,name);
        }

        void Print()
        {
            cout<<"[ GENDER :-> "<<gender<<" ] [ Health :-> "<<health<<" ] [ Name :-> "<<name<<" ]"<<endl;
        }

        static int Random()
        {
            // cout<<this->health<<endl;            // this can only be used inside NON-Static member functions       
            // cout<<health<<endl;       // CTE -> A non-static member is not allowed in static functions
            return TimetoComplete;         // ACCESSIBLE bcz TimetoComplete is static one...
        }

        //Destructor
        ~HERO()
        {
            cout<<"INTO the destructor now"<<endl;
        }
};

// STATIC DATA MEMBER INITIALISATION............
int HERO::TimetoComplete = 200;                 //initialise the static data member by the help of SCOPE RESOLUTION OPERATOR

int main()
{
    /*
    //-------------------------------------------------
    // HERO Ujjawal;

    // Ujjawal.setGender('M');
    // Ujjawal.setHealth(22);
    // char name[10] = "Ujjawal";
    // Ujjawal.setName(name);

    // Ujjawal.Print();

    // HERO mohit(Ujjawal);        
    // mohit.Print();
    
    // char name2[10] = "Mohit";
    // mohit.setName(name2);    
    
    // mohit.Print();
    // Ujjawal.Print();

    // // IMPLEMENTING ----->  COPY ASSIGNMENT OPERATOR
    // Ujjawal = mohit;    
    // mohit.Print();
    // Ujjawal.Print();
    //----------------------------------------------------

    HERO a;     //STATICALLY called

    HERO *b = new HERO();     // DYNAMICALLY called 

    delete b;        // manually b k liye destructor call krna hai

    return 0;
    // HERE, CONSTRUCTOR will be called for both the object, but DESTRUCTOR will be called for a only..
    // bcz, desrtuctor will be called automatically for statically created object only
    // -----------------------------------------------------------------------------------------------------------------
    */
    
                             // STATIC KEYWORDS
    
    HERO a;    
    
    cout<<HERO::TimetoComplete<<endl;           // NO Need to use the object, DIRECTLY accessible using CLASS name
    cout<<a.TimetoComplete<<endl;         // ACCESSIBLE by using OBJECT too 

    HERO b;
    b.TimetoComplete = 1000;

    cout<<a.TimetoComplete<<endl;            // 1000 -> WILL BE CHANGED FOR BOTH
    cout<<b.TimetoComplete<<endl;            //1000

    cout<<"RANDOM CALL -> "<<HERO::Random()<<endl;               // CAlling random()
}























