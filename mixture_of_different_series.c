#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=0;
    scanf("%d",&n);
    printf("0 0 ");
    for(int i=1;i<=n-1;i++)
    {
        if(i%2==0)
        {
            a=(a*3)+2;
            printf("%d ",a);
        }
        else
        {
            b=b+b+1;
            printf("%d ",b);
            
        }
    }
}