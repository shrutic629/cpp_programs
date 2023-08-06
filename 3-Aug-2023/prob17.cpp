#include<iostream>
using namespace std;

class Time
{
int hours;
int minutes;

public:
Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void displayInfo()
{
    cout<<"time is: "<<hours<<":"<<minutes<<endl;
}
};
int main()
{

    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

    Time t1(02, 30);
    t1.displayInfo();
    
    return 0;

}