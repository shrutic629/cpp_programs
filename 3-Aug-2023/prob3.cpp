#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

    public:
        int area()
        {
            return length * width;
        }
        void getdetails()
        {
            cin>>length;
            cin>>width;
        }

        void displayInfo()
        {
            cout<<"area of rectangle is: "<<area()<<endl;
        }
};

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Rectangle r1;
r1.area();
r1.getdetails();
r1.displayInfo();
    

    return 0;
}