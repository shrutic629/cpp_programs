#include<iostream>
using namespace std;

class Bankaccount
{
    int acc_no;
    int balance;

    public:
        Bankaccount(int start_amount)
        {
            acc_no = 1001;
            balance = start_amount;
        }

        void deposit(int amount)
        {   
            balance = balance + amount;
        }

        void withdraw(int amount) {
            balance = balance - amount;
        }

        void view_balance()
        {
            cout<<"Bank account number is:"<<acc_no<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};
int main()
{

    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

    Bankaccount b1(500);
    b1.view_balance();

    b1.deposit(1000);
    b1.view_balance();

    b1.deposit(300);
    b1.view_balance();

    b1.withdraw(500);
    b1.view_balance();

    return 0;

}