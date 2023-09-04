#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int sum = 10*(10+1)/2;
    int i;
    for(i=0; i<=8; i++)
    {
        cin>>a[i];
    }
    int sum1 = 0;
    for(i=0; i<=8; i++)
    {
        sum1 = sum1 + a[i];
    }
    cout<<sum-sum1<<endl;
    
    return 0;
}