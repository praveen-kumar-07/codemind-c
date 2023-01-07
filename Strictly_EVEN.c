#include<stdio.h>
int main()
{
    int a,c=0,i;
    scanf("%d",&a);
    int n[a];
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            if(n[i]%2==0)
            {
                c++;
            }
        }
    }
    if(c>0)
    {
        printf("False");
    }
    else
    printf("True");
}