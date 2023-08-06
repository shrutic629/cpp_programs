#include<iostream>
using namespace std;

class Bankaccount
{
    string name;
    int balance;

    public:
        Bankaccount(string n, int b)
        {
        name = n;
        balance = b;
        }

        void deposit(int add_amount)
        {
            balance = balance + add_amount;
        }

        void viewdetails()
        {
            cout<<"Name is:"<<name<<endl;
            cout<<"balance is:"<<balance<<endl;
        }

};
int main()
{

    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

    Bankaccount b1("shruti", 5000);
    b1.viewdetails();

    b1.deposit(500);
    b1.viewdetails();

    b1.deposit(1000);
    b1.viewdetails();

    b1.deposit(500);
    b1.viewdetails();

    Bankaccount b2("Raj", 1000);
    b2.viewdetails();

    b2.deposit(500);
    b2.viewdetails();

    b2.deposit(500);
    b2.viewdetails();
    
    b2.deposit(500);
    b2.viewdetails();


    return 0;

}