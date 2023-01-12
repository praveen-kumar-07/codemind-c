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
        if(n[i]==0 || n[i]==1)
        {
            c++;
        }
    }
    if(c==a)
    printf("True");
    else
    printf("False");
}