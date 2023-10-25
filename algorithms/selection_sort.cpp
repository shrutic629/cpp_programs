#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    int min_index;
    for(int i=0; i<n; i++)
    {
        min_index=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n]={23,56,89,34,62,27};
    
    selection_sort(arr,n);
    return 0;
}