#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,bob=0,alice=0;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&d,&e,&f);
    if(a!=d)
        a>d?alice++:bob++;
    if(b!=e)
        b>e?alice++:bob++;
    if(c!=f)
        c>f?alice++:bob++;
    printf("%d %d",alice,bob);
    
}
