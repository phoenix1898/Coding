#include<stdio.h>
int main()
{
    int n,i,k,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        sum+=k;
    }
    printf("%d",sum);
}
