#include<stdio.h>
int main()
{
    int n,m,v,c,i;
    scanf("%d%d%d",&n,&m,&v);
    for(i=m;i<=v;i++)
    {
        c=i*n;
        printf("%d x %d = %d
",n,i,c);
    }
}