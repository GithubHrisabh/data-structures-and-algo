#include<iostream>
using namespace std;
/*array has values from 1 to n where one of these is duplicate.
so we sum all the elemets of array and also take out the 
sum of natural nos using formula n*n+1/2 for n-1 elements. 
then we delete the natural no sum from array sum to get the no
which was repeated*/
int duplicate(int a[],int n)
{
    int max_val=n-1,i;  
    int natural_sum=0;
    natural_sum=(n*(n-1))/2;
    int array_sum=0;
    for(i=0;i<n;i++)
        array_sum+=a[i];
    return array_sum-natural_sum;
}
int main()
{
     int arr[] = { 1, 3, 3, 2, 4 };
     
    cout << duplicate(arr,5)<< endl;
     
    return 0;
}


