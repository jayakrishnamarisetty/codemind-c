#include<stdio.h>
int main()
{
    int n,t,m;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d%d",&n,&m);
        printf("%d
",n*5+m*7);
        t--;
    }
}