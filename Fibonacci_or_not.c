#include<stdio.h>
int main()
{
    int a,b=0,c=1,d,e,i;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        d=b+c;
        b=c;
        c=d;
    if(a==d)
   {
       e=1;
       break;
   }
    }
   if(e==1)
   printf("True");
   else
   printf("False");
}