#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int minimise_maximum_height(int a[],int n,int k)
{
  int small,large,mini,maxi,i,ans;
  sort(a,a+n);
  ans=a[n-1]-a[0];
  small=a[0]+k;
  large-a[n-1]-k;
  
  for(i=0;i<n-1;i++)
  {
      mini=min(small,a[i+1]-k);
      maxi=max(large,a[i]+k);
      if(mini<0)
        continue;
      ans=min(ans,maxi-mini) ;
  }
  return ans;
}
    int main() {
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int call=minimise_maximum_height(a,n,k);
    cout<<call;

}
