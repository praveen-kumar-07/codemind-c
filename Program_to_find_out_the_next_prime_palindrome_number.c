#include<stdio.h>
int main()
{
    int a,b,r,i,j,c;
    scanf("%d",&a);
    for(a=a+1;a>0;a++)
    {
        b=0;
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                b++;
            }
        }
        if(b==2)
        {
            j=a;
            r=0;
            while(j!=0)
            {
                c=j%10;
                r=r*10+c;
                j=j/10;
            }
            if(r==a)
            {
                printf("%d",r);
                break;
            }
        }
       
    }
    
}