#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    cin>>i;
    
    cout<<(n&~(1<<2));
    return 0;
    
}