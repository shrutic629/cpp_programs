#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];
    j=0, k=n-1;
    for(i=0; i<=n-1; i++)
    {
        if(a[i]<4)
        {
            swap(a[i], a[j]);
            i++,j++
        }
        else if(a[i]>=4 && a[i]<=8)
        {
            i++;
        }
        else if(a[i]>8)
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