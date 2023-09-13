#include<iostream>
using namespace std;
int main()
{
    char ch = 'A';
    
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            if(i%2==0)
            {
                cout<<'B';
            }
            else
            {
                cout<<'A';
            }
        }
        cout<<endl;
    }
    
    return 0;
}