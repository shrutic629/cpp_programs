#include<iostream>
using namespace std;
int main(){
    
    int a[5]={2,3,4,5,6};
    int b[6]={8,6,4,2,1,9};
    int median;
    int i,j;
    
    for(i=0; i<=5-1; i++)
    {
        for(j=0; j<=6-1; j++)
        {
            if(a[i]==b[j])
            {
                median = a[i];
                cout<<median;
            }
        }
    }
    return 0;
}