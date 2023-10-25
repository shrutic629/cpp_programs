#include<bits/stdc++.h>
using namespace std;

void linear_search(int key,int index, int arr[], int n)
{
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            index=i;
            break;
        }
    }
    
    if(flag==1)
    {
        cout<<"element found at: "<<index<<endl;
    }
}

int main()
{
    int n,key=25,flag=0,index=-1;
    cin>>n;
    int arr[n]={10,15,20,25,30,35,40};
    linear_search(key,index, arr,n);
    
    return 0;
}