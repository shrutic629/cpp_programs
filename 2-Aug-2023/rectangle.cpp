#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;
     
    public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }
};

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

    Rectangle a(10, 20);
    int area = a.area();
    int p = a.perimeter();
    cout<<"Area of A rectangle is: "<<area<<" and perimeter is "<<p<<endl;


    Rectangle b(10, 40);
    int areab = b.area();
    int pb = b.perimeter();
    cout<<"Area of B rectangle is: "<<areab<<" and perimeter is "<<pb;
   
    
    return 0;
}