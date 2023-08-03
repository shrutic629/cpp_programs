#include <iostream>
using namespace std; //to remove::scope resolution operator, standard library

class Person
{
    string name;
    int age;
    string occupation; 
    public:
    Person()
    {
        name="undefined";
        age=0;
        occupation="undefined";
    }
    void getdetails()
    {
        cin>>name;
        cin>>age;
        cin>>occupation;
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
    Person p1;
    Person p2;
    p1.displayInfo();
    p2.displayInfo();

    return 0;
    }
