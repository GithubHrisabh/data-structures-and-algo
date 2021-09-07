#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int*x,int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
int main()
{
   int c0=0,c1=0,c2=0;
   int n,i;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
     cin>>a[i];
   int j=0;
   for(i=0;i<n;i++)
   {
      if(a[i]<0) 
      {
         swap(&a[i],&a[j]);
         j++;
      }
   }
   
   
   
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";
}