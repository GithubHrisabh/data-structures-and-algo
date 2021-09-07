#include <stdio.h>

int main()
{
    int n,i,max,sec_max;
    printf("\nenter n");
    scanf("%d",&n);
    int a[n];
    printf("\nenter array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("\nmaximum element is %d",max);
    sec_max=-99;
    for(i=0;i<n;i++)
    {
        if(a[i]>sec_max && a[i]!=max)
            sec_max=a[i];
    }
    printf("\nsecond max element is %d",sec_max);

    return 0;
}
