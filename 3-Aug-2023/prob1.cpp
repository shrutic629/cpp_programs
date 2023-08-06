#include<iostream>
using namespace std;

class Person
{
    string name;
    int age;

    public:
        Person(string n, int a)
        {
            name = n;
            age = a;
        }

        void displayInfo()
        {
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
        }
};
int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

    Person p1("shruti", 20);
    p1.displayInfo();
    Person p2("raj", 25);
    p2.displayInfo();

    return 0;
}