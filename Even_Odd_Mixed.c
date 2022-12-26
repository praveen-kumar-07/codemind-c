#include<stdio.h>
int main()
{
    int a,b,i=0,j=0,c=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c++;
        if(b%2==0)
        i++;
        else
        j++;
        a=a/10;
    }
    if(c==i)
    printf("Even");
    else if(c==j)
    printf("Odd");
    else
    printf("Mixed");
}