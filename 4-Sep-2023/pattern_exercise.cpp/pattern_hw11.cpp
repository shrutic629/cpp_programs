#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(j>=3-i+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(j>=i)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}