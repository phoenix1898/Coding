#include<stdio.h>
int main()
{
    long int n,m,sum=0;
    scanf("%ld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&m);
        sum+=m;
    }
    printf("%ld",sum);
}
