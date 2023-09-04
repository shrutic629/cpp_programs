#include<iostream>
using namespace std;
int main(){
    int n, i;
    cin>>n;
    int a[n];
    for(i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    
    int temp = a[n-1];
    int temp1 = a[n-2];    
    for(i=n-3; i>=0; i--)
    {
        a[i+2] = a[i];
    }
    a[0] = temp1;
    a[1] = temp;
    
    for(i=0; i<=n-1; i++)
    {
        cout<<a[i];
    }
        
    return 0;
}