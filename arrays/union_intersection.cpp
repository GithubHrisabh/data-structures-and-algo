#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int union_find(int a[],int b[],int n,int m)
{
    set<int> s;
    s.insert(a,a+n);
    s.insert(b,b+m);
    return s.size();
}
int main() {
	int n,m,i;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(i=0;i<n;i++)
	    cin>>a[i];
	for(i=0;i<m;i++)
	    cin>>b[i];
    int call=union_find(a,b,n,m);
    cout<<"no of union"<<call;
    cout<<"\n";
    cout<<"no of intersection"<<n+m-call;
}
