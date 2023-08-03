#include<iostream>
using namespace std;

class Calculator
{
    public:
        float a;
        float b;

        void getdetails()
        {
            cin>>a;
            cin>>b;
        }
        float add()
        {
            return a+b;
        }
        float subtract()
        {
            return a-b;
        }
        float multiply()
        {
            return a*b;
        }
        float divide()
        {
            return a/b;
        }
        void displayinfo()
        {

            cout<<"addition is:"<<add()<<endl;
            cout<<"subtraction is:"<<this->subtract()<<endl;
            cout<<"multiplication is:"<<this->multiply()<<endl;
            cout<<"division is:"<<this->divide()<<endl;
        }
};
int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

    Calculator c1;
    c1.getdetails();
    c1.displayinfo();

    return 0;
}