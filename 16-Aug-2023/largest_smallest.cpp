#include<iostream>
using namespace std;
int main()
{
   int n,i,j;
   cin>>n;
   int a[n];
   for(i=0; i<=n-1; i++)
   {
       cin>>a[i];
   }
   for(i=0; i<=n-1; i++)
   {
       for(j=i+1; j<n; j++)
       {
           if(a[i]>a[j])
           {
               int temp;
               temp = a[j];
               a[j] = a[i];
               a[i] = temp;
           }
       }
   }
   for(i=0; i<=n-1; i++)
   {
       cout<<a[i]<<endl;
   }
   cout<<"largest :"<<a[n-1]<<endl;
   cout<<"smallest :"<<a[0]<<endl;
    return 0;
}