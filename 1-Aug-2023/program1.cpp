
#include <iostream>
using namespace std; //to remove::scope resolution operator, standard library

class Person
{
    private:
        string name;
        int age;
        string occupation; 

    public:
        void getdetails() //member function
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
   
    Person p1;
    
    p1.getdetails();

    p1.displayInfo();

    return 0;
}
