#include<bits/stdc++.h>
using namespace std;

void Binary_search(int arr[],int key,int index,int start,int end)
{
    int flag=0;
   while(start<=end)
    {
        
        int mid= (start+end)/2;
        
        if(arr[mid]==key)
        {
            flag=1;
            index =mid;
            break;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    
    if(flag==1)
    {
        cout<<"Element found at: "<<index;
    }
 
}
int main()
{
    int key=67,flag=0, index=0;
    int n;
    cin>>n;
    int start=0, end=n-1;
    int arr[n]={12,19,23,35,47,50,67};
    
    Binary_search(arr,key,index,start,end);
    return 0;
}