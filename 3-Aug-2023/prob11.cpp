#include<iostream>
using namespace std;

class Bank
{
    string bank_name;

    public:
    Bank(string b)
    {
        bank_name = b;
    }

    void dispay_name() {
        cout<<"Bank name is: "<<bank_name<<endl;
    }

};
int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Bank b1("BOI");
Bank b2("HDFC");
Bank b3("SBI");

b1.dispay_name();
b2.dispay_name();
b3.dispay_name();

    return 0;
}