#include<iostream>
using namespace std;

class Employee
{
private:
string name;
int emp_ID;
int salary;

public:
Employee(string n, int e, int s)
{
    name = n;
    emp_ID = e;
    salary = s;
}

void displayInfo()
{
    cout<<"name:"<<name<<endl;
    cout<<"employee id:"<<emp_ID<<endl;
    cout<<"salary:"<<salary<<endl;
}
};

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Employee e1("shruti", 5909, 10000);
e1.displayInfo();
    return 0;
}