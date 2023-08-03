#include<iostream>
using namespace std;

class Time
{
    private:
        float hours;
        float minutes;

    public:
        Time()
        {
            hours = 5;
            minutes = 19;
        }

        Time(float h, float m)
        {
            hours = h;
            minutes = m;
        }

        void displayTime() {
            cout<<"Hours: "<<hours<<endl;
            cout<<"Minutes: "<<minutes<<endl;
        }
};


int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

    Time t1;
    t1.displayTime();

    cout<<"-------------"<<endl;
    Time t3(6,15);
    t3.displayTime();

    return 0;
}
