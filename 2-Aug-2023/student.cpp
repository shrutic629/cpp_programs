#include<iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;
    int dob;
    string gender;

    int sub1_marks;
    int sub2_marks;
    int sub3_marks;

public:
    Student()
    {
        name= "shruti";
        roll_no=3;
        dob=25;
        gender="female";

        sub1_marks = 10;
        sub2_marks = 15;
        sub3_marks = 40;
    }

    Student(string n, int r, int d, string g, int s1, int s2, int s3)
    {
        name= n;
        roll_no=r;
        dob=d;
        gender=g;

        sub1_marks = s1;
        sub2_marks = s2;
        sub3_marks = s3;
    }
     
     void getdetails()
     {
        cout<<"name:"<<name<<endl;
        cout<<"roll number:"<<roll_no<<endl;
        cout<<"dob:"<<dob<<endl;
        cout<<"gender:"<<gender<<endl;
     }

     void avgmarks()
     {
        int sum = sub1_marks + sub2_marks + sub3_marks;
        cout<<"Avg: "<<sum/3<<endl;
     }
};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    Student s1;
    s1.getdetails();
    s1.avgmarks();
    cout<<"-----------------"<<endl;
    
    Student s2("raj",1, 26, "male", 70, 80, 90);
    s2.getdetails();
    s2.avgmarks();
    return 0;
}