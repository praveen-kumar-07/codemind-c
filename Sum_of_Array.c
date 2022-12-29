#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    int n[a];
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=1;i<=a;i++)
    {
        c=c+n[i];
      //printf("%d ",c);
        
    }
    printf("%d",c);
}