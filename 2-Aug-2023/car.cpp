#include<iostream>
using namespace std;

class Car
{
    string make;
    string model;
    int yearofmfr;

    public:
        Car()
        {
            make="mahindra";
            model="xuv700";
            yearofmfr=2022; 
        }

        Car(string m, string o, int y)
        {
            make=m;
            model=o;
            yearofmfr=y;
        }

        void displayInfo()
        {
            cout<<"make is:"<<make<<endl;
            cout<<"model is:"<<model<<endl;
            cout<<"year of mfr is:"<<yearofmfr<<endl;
        }

        void status() {
            if (yearofmfr > 2020) {
                cout<<"Its a new car!"<<endl;
            } else {
                cout<<"Its an old car!"<<endl;
            }
        }
};
int main()
{
    #ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    Car c1("maruti","omni", 2011);
    c1.displayInfo();
    c1.status();

    cout<<"................"<<endl;
    Car c2;
    c2.displayInfo();
    c2.status();

    return 0;
}