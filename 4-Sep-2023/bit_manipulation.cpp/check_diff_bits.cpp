#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    
    if(a^b)
    {
        c++;
    }
    cout<<c;
    
    return 0;
}