#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=7;
    
    cout<<a<<" "<<b<<endl;
    
    a=a^b;
    cout<<a<<" "<<b<<endl;
    
    b=a^b;
    cout<<a<<" "<<b<<endl;
    
    a=a^b;
    
    cout<<a<<" "<<b<<endl;
    
    return 0;
}