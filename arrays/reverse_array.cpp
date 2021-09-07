#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

void rev(int a[],int n)
{
  int i=0,j=n-1;
  while(i<j)
  {
    swap(&a[i],&a[j]);
    i++;
    j--;
  }
}
int main()
{
   int n,i;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       
   }
   rev(a,n);
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
       
   }
   
               
}
