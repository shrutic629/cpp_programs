#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    int count;
    int frequency;
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<=n-1; i++)
    {
        int count = 1;
        for(j=0; j<=n-1; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                frequency = count;
            }
            else
            {
                count = 1;
                frequency = count;
            }
            
        }
        cout<<a[i]<<":"<<count<<endl;
    }
        
                
    return 0;
}