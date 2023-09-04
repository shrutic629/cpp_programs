#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    
    int sum = 0;
    for(i=0; i<=n-1; i++)
    {
        sum = sum + a[i];
    }
    cout<<sum<<endl;
    
    return 0;
}