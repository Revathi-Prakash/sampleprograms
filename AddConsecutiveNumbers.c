#include<iostream>
using namespace std;
int sum(int s)
{
  int i,j=0;
  while(s>0)
  {
  j=j+s%10;
  s=s/10;
  }
return j;
}

int main()
{
  int n,i,j,s=0,m=0;
  cout<<"enter";
  cin>>n;
  cout<<"enter";
  int a[n],b[100][100]={0};
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    b[0][i]=a[i];
  }
  for(i=1;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
      b[i][j]=b[i-1][j]+b[i-1][j+1];
    }
  }
  m=b[n-1][0];
  while(m>9)
  {
      m=sum(m);
  }
  cout<<m;
}
