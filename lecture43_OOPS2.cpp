

// ENCAPSULATION, INHERITANCE, POLYMORPHISM, ABSTRACTION, 


/*
// 1. ENCAPSULATION - IMPLEMENTATION

#include<iostream>

using namespace std;

class HERO
{
    private:
        string name;
        int age;
        int height;

    public:
        int getAge()
        {
            return this->age;
        }

};

int main()
{
    HERO Ujjawal;

    cout<<"Encapsulation - Impelemented"<<endl;
}
*/



/*
// 2.         ---------------               INHERITANCE ----->

#include<iostream>

using namespace std;

class HUMAN
{
    protected:
        int height;
        int weight;
        int age;

        int getAge()
        {
            return this->age;
        }

        void setAge(int w)
        {
            this->age = w;
        }
};

class MALE : public HUMAN
{
    public:
        string color;
    
        void sleep()
        {
            cout<<"Male is sleeping"<<endl;
        }

        int getAge()
        {
            return this->age;
        }
};

int main()
{

    // MALE obj;
    // cout<<obj.age<<endl;
    // cout<<obj.height<<endl;
    // cout<<obj.weight<<endl;
    // cout<<obj.color<<endl;

    // obj.sleep();
    // obj.setAge(22);
    // cout<<obj.age<<endl;



    // Public -> public mode of inheritance
    MALE obj;
    // cout<<obj.age;      //accessible


    // Public -> Protected mode of inheritance
    // cout<<obj.age;      //Inacessible(age behaves as protected)
    // cout<<obj.getAge()<<endl;              // apne class m to chlega hi


    // Public -> Private mode of inheritance
    // cout<<obj.age;      //Inacessible  (age behaves as a private)
    // cout<<obj.getAge()<<endl;              // apne class m to chlega hi


    // Protected -> Public mode of inheritance
    // cout<<obj.age;      //Inacessible  (age behaves as a protected)
    // cout<<obj.getAge()<<endl;              // apne class m to chlega hi


    // Protected -> Private mode of inheritance
    // cout<<obj.age;      //Inacessible  (age behaves as a private)
    // cout<<obj.getAge()<<endl;              // apne class m to chlega hi


    // Protected -> Protectd mode of inheritance
    // cout<<obj.age;      //Inacessible  (age behaves as a protected)
    // cout<<obj.getAge()<<endl;              // apne class m to chlega hi

}
*/



/*
// 3.1 SINGLE LEVEL INHERITANCE

#include<iostream>

using namespace std;

class ANIMAL
{
    public:
        int age;
        int weight;

        void speak()
        {
            cout<<"Speaking"<<endl;
        }
};

class DOG: public ANIMAL
{

};

int main()
{
    DOG d;
    d.speak();          //speaking
}
*/




/*
//3.2 Multilevel INHERITANCE

#include<iostream>

using namespace std;

class ANIMAL
{
    public:
        int age;
        int weight;

        void speak()
        {
            cout<<"Speaking"<<endl;
        }
};

class DOG: public ANIMAL
{

};

class germanSephard: public DOG
{

};

int main()
{
    germanSephard g;
    g.speak();          //speaking
}
*/





/*
//3.3 Multiple INHERITANCE

#include<iostream>

using namespace std;

class ANIMAL
{
    public:
        int age;
        int weight;

        void bark()
        {
            cout<<"Barking"<<endl;
        }
};

class HUMAN
{
    public:
        string color;

        void speak()
        {
            cout<<"Speaking"<<endl;
        }
};

class HYBRID : public ANIMAL, public HUMAN
{

};

int main()
{
    HYBRID h;
    h.bark();                 // Barking
    h.speak();                 // Speaking
}
*/




/*
// 3.4 HIERARCHICAL INHERITANCE

#include<iostream>

using namespace std;

class A
{
    public:
        void function1()
        {
            cout<<"FUNCTION 1"<<endl;
        }
};

class B: public A
{
    public:
        void function2()
        {
            cout<<"FUNCTION 2"<<endl;
        }
};

class C: public A
{
    public:
        void function3()
        {
            cout<<"FUNCTION 3"<<endl;
        }
};

int main()
{
    A obj1;
    obj1.function1();

    B obj2;
    obj2.function1();
    obj2.function2();

    C obj3;
    obj3.function1();
    obj3.function3();
    // obj3.function2();          // C class has no member "function2"   
}
*/





/*
// 3.5 HYBRID INHERITANCE

#include<iostream>

using namespace std;

class A
{
    public:
        void function1()
        {
            cout<<"FUNCTION 1"<<endl;
        }
};

class B: public A
{
    public:
        void function2()
        {
            cout<<"FUNCTION 2"<<endl;
        }
};

class D
{
    public:
        void function4()
        {
            cout<<"FUNCTION 4"<<endl;
        }
};

class C: public A, public D
{
    public:
        void function3()
        {
            cout<<"FUNCTION 3"<<endl;
        }
};

int main()
{
    A obj1;
    obj1.function1();

    B obj2;
    obj2.function1();
    obj2.function2();

    C obj3;
    obj3.function1();
    obj3.function3();
    // obj3.function2();          // C class has no member "function2"  
    obj3.function4(); 
}
*/





/*
// INHERITANCE AMBIGUITY(and its solution)

#include<iostream>

using namespace std;

class A
{
    public: 
    void Function()
    {
        cout<<"I am A"<<endl;
    }
};

class B
{
    public:
    void Function()
    {
        cout<<"I am B"<<endl;
    }
};

class C:public A, public B
{

};

int main()
{
    C obj;
    // obj.Function();              // FUNCTION IS AMBIGUOUS

    // So, This ambiguity is removed by SCOPE RESOLUTION OPERATOR(::)
    obj.A::Function();
    obj.B::Function();
}
*/







//________________________________________________________________________________________________________________
/*
// STATIC POLYMORPHISM or COMPILE-TIME POLYMORPHISM

// 1. Function Overloading

#include<iostream>

using namespace std;

class A
{
    public:
        void sayHello()
        {
            cout<<"Hello UJJAWAL"<<endl;
        }

        void sayHello(int n)
        {
            cout<<"Hello UJJAWAL"<<endl;            
        }

        // int sayHello()              //Can't overload a function based on only return type difference
        // {
        //     cout<<"Hello UJJAWAL"<<endl;
        //     return 1;
        // }
};

int main()
{
    A obj;
    obj.sayHello(5);
    obj.sayHello();
}




// 2. Opertor Overloading(Plus with minus)

#include<iostream>

using namespace std;

class A
{
    public:
        int a;
        int b;

        void operator + (A &obj)
        {
            // int value1 = this->a;
            // int value2 = obj.a;
            // cout<<"Output :- "<<value2-value1<<endl;

            cout<<"Hello UJJAWAL"<<endl;
        }


        void operator () ()           //overloading bracket -> ()
        {
            cout<<"Mai bracket hoon"<<endl;
        }
};

int main()
{
    A obj1, obj2;

    obj1.a = 4;
    obj2.a = 10;

    obj1 + obj2;
    obj1();      // MAI BRACKET HOON
}
*/
//___________________________________________________________________________________________________




/*
// DYNAMIC POLYMORPHISM or RUN-TIME POLYMORPHISM

// 1. METHOD OVERRIDING

#include<iostream>

using namespace std;

class Animal
{
    public:
        void speak()
        {
            cout<<"Speaking"<<endl;
        }
};

class Dog : public Animal
{
    public:
        void speak()
        {
            cout<<"Barking"<<endl;
        }
};

int main()
{
    Dog D1;
    D1.speak();               //Barking
}
*/





// Friend Function Implementation

#include<iostream>

using namespace std;

class Rectangle
{
    public:
        int length, breadth;
        
        Rectangle(int length, int breadth)
        {
            this->length = length;
            this->breadth = breadth;
        }

        friend void PrintInfo(Rectangle);
};

void PrintInfo(Rectangle R)
{
  cout<<"Length :-> "<<R.length<<endl;
  cout<<"Breadth :-> "<<R.breadth<<endl;
  cout<<"Area of the given Rectangle :-> "<<R.length*R.breadth<<endl;
  cout<<"------------OOPS FINISHED----------"<<endl;
}

int main()
{
    Rectangle R1(10,20);
    PrintInfo(R1);
}