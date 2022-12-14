#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=(a/4)+1;
    if(a<=4 && a>=1)
    printf("1");
    else if(a%4==0)
    printf("%d",a/4);
    else if(a%4!=0)
    printf("%d",b);
    else
    printf("0");
}