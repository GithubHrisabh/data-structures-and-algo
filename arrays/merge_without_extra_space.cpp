#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int merge_without_extra_space(int a[],int b[],int n,int m)
{
    int i,j;
    j=0,i=n-1;
    while(j<m && i>-1 )
    {
        if(a[i]>b[j])
            swap(&a[i],&b[j]);
        j++;
        i--;
    }
    sort(a,a+n);
    sort(b,b+m);
}
int main() {
	int n,m,i;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	for(int i=0;i<m;i++)
	    cin>>b[i];
	merge_without_extra_space(a,b,n,m);
	for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	for(i=0;i<m;i++)
	    cout<<b[i]<<" ";
}
