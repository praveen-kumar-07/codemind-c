#include<stdio.h>
int main()
{
    int n,m,k,a,b;
    scanf("%d%d%d",&n,&m,&k);
    a=m*k;
    if(a>=n)
    {
        printf("YES");
    }
    else
    printf("NO");
}