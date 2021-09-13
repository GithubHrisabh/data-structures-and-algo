#include<bits/stdc++.h>
using namespace std;
int trapping_rainwater(int a[],int n)
{
    int l[n],r[n];
    int i;
    l[0]=a[0];
    for(i=1;i<n;i++)
        l[i]=max(a[i],l[i-1]);
    r[n-1]=a[n-1];
    for(i=n-2;i>=0;i--)
        r[i]=max(a[i],r[i+1]);
    int s=0;
    for(i=1;i<n-1;i++)
        s+=min(l[i],r[i])-a[i];
    return s;
}
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int a[n];
    cout<<"enter elements in array";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int call=trapping_rainwater(a,n);
    cout<<"the water quantity stored in blocks is "<<call;
}
