#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=4; i++)
    {
        char k = 'A';
        for(int j=1; j<=i; j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
        
    }
    return 0;
}