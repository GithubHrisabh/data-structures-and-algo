#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,k;
    cout<<"enter size ";
    cin>>n;
    int a[n];
    cout<<"enter array elements ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter k";
    cin>>k;
    
    set<int> s(a, a+n);
    set<int>::iterator itr = s.begin(); 
    advance(itr, k-1); 
 
    cout << *itr << "\n";
 
    return 0;
    
}
