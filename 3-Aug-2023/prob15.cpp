#include<iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;

    public:
    Student(string n, int r)
    {
        name = n;
        roll_no = r;
    }
    void displaydetails()
    {
        cout<<"student name is"<<name<<endl;
        cout<<"student roll number is"<<roll_no<<endl;
    }
};
int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Student s1("shruti", 3);
s1.displaydetails();
Student s2("Pooja", 5);
s2.displaydetails();
Student s3("Rajdeep", 7);
s3.displaydetails();
Student s4("Pramod", 1);
s4.displaydetails();


    return 0;
}