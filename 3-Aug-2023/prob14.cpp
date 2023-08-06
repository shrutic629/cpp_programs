#include<iostream>
using namespace std;

class Country
{
    string country_name;

    public:
    Country(string c)
    {
    country_name = c;
    }
    
    void displayInfo()
    {
        cout<<"country name is: "<<country_name<<endl;
    }
};

int main()
{

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    Country c1("India");
    Country c2("America");
    Country c3("China");

    c1.displayInfo();
    c2.displayInfo();
    c3.displayInfo();

    return 0;
}