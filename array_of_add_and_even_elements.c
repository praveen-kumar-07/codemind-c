#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(n[i]%2!=0)
        {
            printf("%d ",n[i]);
        }
    }
    for(i=0;i<a;i++)
    {
        if(n[i]%2==0)
        {
            printf("%d ",n[i]);
        }
    }
}