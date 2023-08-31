#include<stdio.h>
int main()
{
    int a,i;
    float c=0;
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
    printf("%.2f",c/a);
}