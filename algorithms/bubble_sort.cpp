#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
  for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int n;
    int arr[]={3,7,0,9,6,4,1};
    n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    
    
    return 0;
}