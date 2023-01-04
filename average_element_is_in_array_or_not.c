#include<stdio.h>
int main()
{
    int a,i,b,d=0;
    int c=0;
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
    b=c/a;
    for(i=0;i<a;i++)
    {
        if(n[i]==b)
        d++;
    }
    if(d==1 || d==2 || d==3)
    printf("True");
    else
    printf("False");
}