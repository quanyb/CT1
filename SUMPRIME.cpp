#include <bits/stdc++.h>
#define nmax 10007
using namespace std;
int res=0,f[nmax];
int a,b,c,d,x;
void sangnto(int u)
{
    for(int i=1;i<=u;i++) f[i]=1;
    f[1]=0;
    for(int i=2;i*i<=u;i++)
        if(f[i]==1)
            for(int j=i;j*i<=u;j+=1)
                f[i*j]=0;
}
void xl()
{
    for(int a=1;a<=x;a++)
        for(int b=a;b<=x;b++)
            for(int c=b;c<=x;c++)
                for(int d=c;d<=x;d++)
                    if(a+b+c+d==x&&f[a]==1&&f[b]==1&&f[c]==1&&f[d]==1)
                        res++;
}
int main()
{
    cin>>x;
    sangnto(x);
    xl();
    cout<<res;
    return 0;
}
int main()
{
