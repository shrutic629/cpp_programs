
#include <iostream>
using namespace std; //to remove::scope resolution operator, standard library

class Person
{
    public:
        string name;
        int age;
        string occupation; 
    
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
    p1.name="Shruti";
    p1.occupation="pqr";
    p1.age= 30;
    cout<<p1.age<<"\n";
    p1.displayInfo();

    return 0;
}
