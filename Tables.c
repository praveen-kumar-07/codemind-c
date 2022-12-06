#include<stdio.h>
int main()
{
    int n,r,i,c;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
        c=n*i;
        printf("%d x %d = %d
",n,i,c);
        }
    }
   // printf("%d x %d = %d
",n,i,c);
}