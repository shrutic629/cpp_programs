#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin>>n;
    
    int a[n];
    int c=0;
    
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
              cout<<"common num :"<<a[i]<<endl;
          }
        }
    }
    
    return 0;
}

