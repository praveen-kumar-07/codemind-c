#include<stdio.h>
int main()
{
    int a,b,c=0,d,i;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        if(b>c)
        {
           c=b; 
        }
        a=a/10;
    }
    printf("%d",c);
}