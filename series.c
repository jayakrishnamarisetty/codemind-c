#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,k1=0,k2=0;
    scanf("%d",&n);
    printf("0 ");
    for(int i=1;i<=n-1;i++)
    {
        if(i%2==0)
        {
            a=pow(2,k1);
            printf("%d ",a);
            k1++;
        }
        else
        {
            b=pow(3,k2);
            printf("%d ",b);
            k2++;
        }
    }
}