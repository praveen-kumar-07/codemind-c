#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int c,n,b,r=0;
        scanf("%d",&c);
        n=c;
        while(n!=0)
        {
            b=n%10;
            r=r*10+b;
            n=n/10;
        }
        if(r==c)
        printf("True
");
        else
        printf("False
");
    }
}