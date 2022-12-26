#include<stdio.h>
int main()
{
    int a,i,c=0,d,f=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        c=c+n[i];
    }
    d=c/a;
    for(i=0;i<a;i++)
    {
        if(n[i]>=d)
        {
            f++;
        }
    }
    printf("%d",f);
}