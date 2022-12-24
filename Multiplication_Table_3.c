#include<stdio.h>
int main()
{
    int k,n,a,b,i;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        k=n*i;
        printf("%d x %d = %d
",n,i,k);
    }
    
}