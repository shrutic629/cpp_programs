#include<bits/stdc++.h>
using namespace std;

 void union_sortarray(int arr1[], int arr2[], int l1, int l2)
{
   int unionarray[l1+l2];
   int k=0;
   
   for(int i=0; i<l1; i++)
   {
       bool isduplicate=false;
       for(int j=0; j<k; j++)
       {
           if(arr1[i]==unionarray[j])
           {
               isduplicate = true;
               break;
           }
       }
       if(!isduplicate)
       {
           unionarray[k]=arr1[i];
           k++;
       }
   }
   
   for(int i=0; i<l2; i++)
   {
       bool isduplicate=false;
       for(int j=0; j<k; j++)
       {
           if(arr2[i]==unionarray[j])
           {
               isduplicate = true;
               break;
           }
       }
       if(!isduplicate)
       {
           unionarray[k]=arr2[i];
           k++;
       }
   }
   
   for(auto it: unionarray)
   {
       cout<<it<<" ";
   }
   
}

int main()
{
    int arr1[]={1,3,3,5,9};
    int arr2[]={2,4,6,7};
    int l1= (sizeof(arr1)/sizeof(arr1[0]));
    int l2= (sizeof(arr2)/sizeof(arr2[0]));
    
    union_sortarray(arr1, arr2, l1,l2);
    
    return 0;
}