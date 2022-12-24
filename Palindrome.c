#include<stdio.h>
int main()
{
    int n,s=0,k,r,a;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(a==s)
    printf("True");
    else
    printf("False");
}