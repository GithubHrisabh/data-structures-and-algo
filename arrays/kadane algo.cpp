#include<iostream>
using namespace std;
int kadane(int a[],int n)
{
    int i;
    int res=a[0];
    int maxsum=a[0];
    for(i=1;i<n;i++)
    {
        res=max(res+a[i],a[i]);
        maxsum=max(maxsum,res);
    }
    return maxsum;
}
int main()
{
    int n,i;
    cout<<"enter size";
    cin>>n;
    int a[n];
    cout<<"enter size of array";
    for(i=0;i<n;i++)
        cin>>a[i];
    int call=kadane(a,n);
    cout<<"the max sum of subarray is "<<call;
}

