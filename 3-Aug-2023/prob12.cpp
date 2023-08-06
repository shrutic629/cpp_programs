#include<iostream>
using namespace std;

class Temperature
{
    int celcius;
    int fahrenheit;

    public:
    void getdetails()
    {
        cin>>celcius;
    }

    int temperature()
    {
        return ((celcius * 9/5) + 32);

    }
    
  void displayinfo()
  {
    cout<<"temperature in fehrenheit: "<<temperature()<<endl;
  }
};
int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Temperature t1;
t1.getdetails();
t1.displayinfo();

    return 0;
}