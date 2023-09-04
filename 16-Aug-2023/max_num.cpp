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
    
    int max= a[0];
    for(i=0; i<=n-1; i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    cout<<max;
    
    return 0;
}