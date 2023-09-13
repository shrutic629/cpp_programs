#include<iostream>
using namespace std;
int main()
{
    char ch;
    
    for(ch='A'; ch<='Z'; ch++)
    {
        if(ch=='A' || ch=='E' || ch=='I'|| ch=='O'|| ch=='U')
        {
            continue;
        }
        else
        {
            cout<<ch<<" ";
        }
    }
}