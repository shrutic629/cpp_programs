#include<bits/stdc++.h>
using namespace std;

 void Merge_sort(int arr1[], int arr2[], int arr3[],int l1, int l2, int length)
{
    int i,j,k;
    
    while((i<l1) && (j<l2))
    {
        if(arr1[i]<=arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    
    while(i<l1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    
    while(j<l2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
        for(int k=0; k<length; k++)
        {
            cout<<arr3[k];
        }
}

int main()
{
    int arr1[5]={1,4,5,8,9};
    int arr2[4]={2,3,6,7};
    int arr3[9];
    int length=(sizeof(arr3)/sizeof(arr3[0]));
    int l1 = (sizeof(arr1)/sizeof(arr1[0]));
    int l2 = (sizeof(arr2)/sizeof(arr2[0]));
    
    Merge_sort(arr1, arr2, arr3,l1,l2, length);
    
    return 0;
}