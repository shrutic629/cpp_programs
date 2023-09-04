#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[m];
    int b[n];
    int c[m+n];
    int i,j,k;
    
    for(i=0; i<=m-1; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<=n-1; j++)
    {
        cin>>a[j];
    }
    for(k=0; k<m+n; k++)
    {
        if(i<n && j<m)
    {
        if(a[i]<a[j])
        {
            i++;
        }
        else
        {
            j++;
        }
        if(i<n)
        {
            c[k]=a[i];
            i++;
        }
        if(j<m)
        {
            c[k]=b[j];
            j++;
        }
    }
    }
    
    for(k=0; k<=n-1; k++)
    {
        cout<<a[k]<<endl;
    }
    return 0;
}
