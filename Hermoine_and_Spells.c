#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && c>b)
    printf("%d",a+c);
    else if(b>a && c>a)
    printf("%d",b+c);
    else
    printf("%d",a+b);
}