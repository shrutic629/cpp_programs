#include<iostream>
using namespace std;

class Circle
{
int radius;

public:
Circle()
{
    radius = 2;
}

float circumference()
{
    return 2 * 3.14 * radius * radius;
}

void displayinfo()
{
    cout<<"circumference of circle is: "<<circumference()<<endl;
}
};
int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Circle c1;
c1.displayinfo();

    return 0;
}