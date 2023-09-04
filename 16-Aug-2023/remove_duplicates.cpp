#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int temp;
    int a[n];
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<=n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            int c =0;
            if(a[i]==a[j])
            {
                c++;
                if(c==1)
                {
                  a[j]=0;
                }
            }
        }
    }
    for(i=0; i<=n-1; i++)
    {
        cout<<a[i];
    }
    
    return 0;
}