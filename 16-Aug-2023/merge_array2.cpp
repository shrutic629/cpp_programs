#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k;
    int a[n];
    int b[m];
    cin>>n;
    cin>>m;
    int c[n+m];
    
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    
    for(j=0; j<=m-1; j++)
    {
        cin>>b[j];
    }
    i=0,j=0;
    for(k=0; k<m+n; k++)
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
            i++;
        }
        else if(a[j]<=a[i])
        {
          c[k]  = a[j];
          j++;
        }
        else if(i==n-1)
        {
            c[k] = a[j];
            j++;
        }
        else if(j==m-1)
        {
            c[k] = a[i];
            i++;
        } 
    }
    for(k=0; k<n+m; k++)
    {
        cout<<c[k];
    }
    return 0;
}