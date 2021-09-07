#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int largest_sum_subarray(int a[],int n)
{
   int sum=a[0];
   int maxsum=a[0];
   for(int i=1;i<n;i++)
   {
       sum=max(a[i],sum+a[i]);
       maxsum=max(maxsum,sum);
   }
   return maxsum;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
       cin>>a[i];
    int call=largest_sum_subarray(a,n);
    cout<<"max contiguous subarray sum is "<<call;
     
}