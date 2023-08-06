#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int * X;
    X =&a;
    cout<<a<<"\n";
    cout<<&a<<"\n";
    cout<<X<<"\n";
    cout<<*X<<"\n";
    cout<<*(&a)<<"\n";

    return 0;
}