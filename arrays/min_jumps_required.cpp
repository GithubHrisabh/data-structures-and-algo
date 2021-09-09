#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int min_jump(int a[],int n)
{
    int i=0,c=0;
    while(i<n)
    {
        i=i+a[i];
        
        if(a[i]!=0)
            c++;
        else
            return -1;
    }
    return c;
}
int main() {
	int n,i;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	    cin>>a[i];
	
	int call=min_jump(a,n);
	cout<<call;
}	

