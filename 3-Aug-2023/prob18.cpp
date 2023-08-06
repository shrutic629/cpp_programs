#include<iostream>
using namespace std;

class Circle
{
    int radius;

    public:
    void getdetails()
    {
        cin>>radius;
    }

    float area()
    {
        return (3.14 * radius * radius);
    }

    void displayinfo()
    {
        cout<<"area of circle is: "<<area()<<endl;
    }
};
int main()
{

    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

    Circle c1;
    c1.getdetails();
    c1.displayinfo();
    
    return 0;

}