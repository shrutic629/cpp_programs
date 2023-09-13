#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    int rsb = 0;
    
    while(n)
    {
        rsb = n & -n;
        c++;
        n= n-rsb;
    }
    cout<<c;
    return 0;
}