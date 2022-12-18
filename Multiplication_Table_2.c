#include<stdio.h>
int main()
{
    int n,m,v,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        v=i*n;
        printf("%d x %d = %d
",n,i,v);
    }
}