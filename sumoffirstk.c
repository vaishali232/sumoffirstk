#include<stdio.h>
int main()
{
    int n,k,sum=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
  
}
