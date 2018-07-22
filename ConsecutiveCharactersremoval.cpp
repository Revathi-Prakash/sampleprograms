/*
remove consecutive elemnts from the string.
Consecutive Characters from Two Strings(PID-6043)*/
#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    string s1,s2,t;
    cin>>s1>>s2;
    int i,j,k=s1.length(),l=s2.length(),m,c;
    t=s1;
    for(i=0;i<k;i++)
    {
        c=0;
        for(j=0;j<l;j++)
        {
            if(s1[i]==s2[j])
            c++;
        }
        for(j=0;j<l;j++)
        {
            if(s1[i+1]==s2[j])
            c++;
        }
        if(c==2)
        t[i+1]='*';
    }
    for(i=0;i<k;i++)
    {
        if(t[i]!='*')
        cout<<t[i];
    }
}
