#include<stdio.h>
int main()
    {
        int a,i,c=0,b=0,k,p;
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            c=c+i;
           b=(b+(i*i));
          k=(c*c)-b;
         
        }
        printf("%d",k);
    }