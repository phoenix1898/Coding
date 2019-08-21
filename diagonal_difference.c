#include<stdio.h>
int main()
{
    int n,a[100][100],i,j,rsum=0,lsum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                lsum+=a[i][j];
            if((i+j)==(n-1))
                rsum+=a[i][j];
        }
    }
    printf("%d",abs(lsum-rsum));

}
