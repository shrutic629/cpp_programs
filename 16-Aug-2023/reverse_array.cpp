#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];
    
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    
    for(i=0; i<=n/2; i++)
    {
        for(j=n-1; j>=n/2; j--)
        {
            int temp;
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            i++;
        }
    }
    for(i=0; i<=n-1; i++)
    {
        cout<<a[i];
    }
    
    return 0;
}