#include<iostream>
using namespace std;

class Car
{
    private:
        string make;
        string model;
        int year;

    public:
    Car()
    {
        make = "Mahindra";
        model = "xuv700";
        year = 2001;
    }
    void displayInfo()
    {
        cout<<"make of car is: "<<make<<endl;
        cout<<"model of car is: "<<model<<endl;
        cout<<"year : "<<year<<endl;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Car c1;
c1.displayInfo();

    return 0;
}