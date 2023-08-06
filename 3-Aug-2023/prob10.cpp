#include<iostream>
using namespace std;

class Rectangle
{
int length;
int width;

public:
void getdetails()
{
    cin>>length;
    cin>>width;
}

int is_square()
{
    if(length==width)
    {
        cout<<"area is square"<<endl;
    }
    else
    {
        cout<<"area is not square"<<endl;
    }
}
};

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Rectangle r1;
r1.getdetails();
r1.is_square();

    return 0;
}