#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    int b[n];
    int c = 0;
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    
    int start=0, last=n-1;
    for(i=0; i<=n-1; i++)
    {
        if(a[i]%2!=0)
        {
            b[start]=a[i];
            start++;
        }
        else
        {
            b[last]=a[i];
            last--;
        }
    }
    
    for(i=0; i<=n-1; i++)
    {
        cout<<b[i];
    }
    
    
    return 0;
}
