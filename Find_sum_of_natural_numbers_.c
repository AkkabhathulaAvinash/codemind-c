#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        if (1<=n<=1000){
            sum+=i;
        }
    }
    printf("%d",sum);
}