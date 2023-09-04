#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    int a[n];
    
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    
    i=0; j=0, k=n-1;

    while(i<=k)
    {
        if(a[i]==0)
        {
            swap(a[i],a[j]);
            i++, j++;
        }
        else if(a[i]==1)
        {
            i++;
        }
        else if(a[i]==2)
        {
            swap(a[i], a[k]);
            k--;
        }
    }


    for(i=0; i<=n-1; i++)
    {
        cout<<a[i];
    }
    
    return 0;
}
