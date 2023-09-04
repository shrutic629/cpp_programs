#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin>>n;
    int a[n];
    int sum;
    int num = 10;
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<=n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                sum = a[i]+a[j];
                if(sum == num)
                    {
                        cout<<a[i];
                    }
            }
        }
    }
    
    return 0;
}