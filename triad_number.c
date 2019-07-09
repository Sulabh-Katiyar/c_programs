//Program to print triad numbers
#include<stdio.h>
void main (void)
{
    int n,i,j,d1,d2,d3,k,l,m;
    for(n=100;n<=999/3;n++)
    {
        j=2;
        for(i=n;i<=n*3;)
        {
            k=i;
            d1=k%10; k/=10;
            d2=k%10; k/=10;
            d3=k;
            i=n*j;
            j++;
            if(d1==d2||d2==d3||d3==d1)
                goto nextnum;
        }
        for(k=n;k>0;k/=10)
        {
            d1=k%10;
            for(l=n*2;l>0;l/=10)
            {
                d2=l%10;
                for(m=n*3;m>0;m/=10)
                {
                    d3=m%10;
                    if(d1==d2||d2==d3||d3==d1)
                        goto nextnum;
                }
            }
        }
        printf("%d %d %d\n",n,n*2,n*3);
        nextnum:
            continue;
    }
}