#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(i%2==0)
        {
            c=c+n[i];
        }
    }
    printf("%d",c);
}