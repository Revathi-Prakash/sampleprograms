#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[1001],c1;
char v;
int n,c=-1,l;
scanf("%[^\n]s",s);
scanf("%d",&n);
scanf(" %c",&v);

l=strlen(s);


if(toupper(v)=='L')
{
    for(int i=0;i<l;i++)
    {
        if(s[i]==n+'a'-1)
        c++;
        
    }
}
else if(toupper(v)=='U')
{
    c1=toupper(n+'a'-1);
    for(int i=0;i<l;i++)
    {
        if(s[i]==c1)
        c++;
        
    }
}
if(c==-1)
printf("%d",c);
else
printf("%d",c+1);
}
