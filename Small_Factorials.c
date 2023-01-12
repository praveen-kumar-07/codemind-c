#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,c=1;
        scanf("%d",&b);
        for(j=1;j<=b;j++)
        {
            c=c*j;
        }
        printf("%d
",c);
    }
    
}