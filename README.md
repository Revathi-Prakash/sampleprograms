/*
// small digit
ex:ip
6735172
op:
1235677
ip:
789900123
op:
100237899
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
long n;
int a[20],i=0,j,temp,k;
    scanf("%ld",&n);
    while(n>0)
    {
        a[i++]=n%10;
        n=n/10;
    }
    for(j=0;j<i-1;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(a[j]>a[k])
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    for(j=0;j<i;j++)
    {
        if(a[j]!=0)
        {
            temp=a[j];
            a[j]=a[0];
            a[0]=temp;
            break;
        }
    }
    for(j=0;j<i;j++)
    {
       printf("%d",a[j]);
    }
