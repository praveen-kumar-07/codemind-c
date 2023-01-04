#include<stdio.h>
int main()
{
    int a,c=0,i;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        if(n[i]==b)
        c++;
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}