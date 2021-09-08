#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int rotate(int a[],int n)
{
    int temp,i;
    temp=a[n-1];
    for(i=n-1;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
}
int main() {
	int n,i;
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++)
	    cin>>a[i];
	
    rotate(a,n);
    for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
    
}
