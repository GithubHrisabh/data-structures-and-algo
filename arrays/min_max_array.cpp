#include <iostream>
using namespace std;

int min(int a[],int n)
{
   int mn=10000;
   for(int i=0;i<n;i++)
       if(a[i]<mn)
         mn=a[i]; 
   return mn;
}
int max(int a[],int n)
{
   int mx=-2000;
   for(int i=0;i<n;i++)
       if(a[i]>mx)
         mx=a[i]; 
   return mx;
}
int main()
{
   int n,i;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
      cin>>a[i];
   int min1=min(a,n);
   int max1=max(a,n);
   cout<<"max of array is "<<max1;
   cout<<"\n";
   cout<<"min of array is "<<min1;
}
