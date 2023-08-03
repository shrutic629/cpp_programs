#include <iostream>
using namespace std; //to remove::scope resolution operator, standard library

class Person
{
    public:
    string name;
    int age;
    string occupation; 
    
    Person(string n,int a,string o)
    {
        name=n;
        age=a;
        occupation=o;
    }

    void displayInfo() //member function
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"occupation:"<<occupation<<endl;
    }
};
    int main()
    {
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

    //datatype object
    Person p1("Object1", 1, "cpp1");
    Person p2("Object2", 2, "cpp2");

    
    p1.displayInfo();
    p2.displayInfo();

    return 0;
    }
