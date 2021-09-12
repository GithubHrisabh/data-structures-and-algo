#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void next_permutation(vector<int> nums)
{
    int count = 0;
        
        do{
            if(count == 1)
                break;
                count +=1;
        }while(next_permutation(nums.begin(), nums.end()));
}
int main()
{
    
    int i,n,ele;
    cin>>n;
    vector<int> nums(n);
    for(i=0;i<n;i++)
    {
        cin>>ele;
        nums.insert(ele);
    }
    next_permutation(nums);
}