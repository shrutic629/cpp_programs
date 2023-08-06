#include<iostream>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for(int i=1; i<=i; i++)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif // ONLINE_JUDGE

int n;
cin>>n;
int fact = factorial(n);
cout<<fact;

    return 0;
}