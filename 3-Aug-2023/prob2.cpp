#include<iostream>
using namespace std;

class Bankaccount
{
    int account_no;
    string acc_holder_name;
    int balance;

    public:
    Bankaccount()
    {
        account_no = 1001;
        acc_holder_name = "shruti";
        balance = 1000;
    }

    void displayInfo()
    {
        cout<<"account number is: "<<account_no<<endl;
        cout<<"account holder name is: "<<acc_holder_name<<endl;
        cout<<"balance is: "<<balance<<endl;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

Bankaccount b1;
b1.displayInfo();
    

    return 0;
}