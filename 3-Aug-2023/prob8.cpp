#include<iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

    public:
    Date()
    {
        day = 25;
        month = 03;
        year = 1993;
    }

    void displayInfo()
    {
        cout<<"the date is: "<<day<<"-"<<month<<"-"<<year<<endl;
    }

};
int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Date d1;
d1.displayInfo();

    return 0;
}