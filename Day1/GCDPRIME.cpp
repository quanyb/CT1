#include <bits/stdc++.h>
#define nmax 10007
using namespace std;
int f[nmax];
int n;
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
    sangnto(n);
    for(int i=1;i<=trunc(sqrt(n));i++)
        if(n%i==0)
        {
            if(f[i]==1)
                cout<<i<<" ";
            if(n/i!=i)
                if(f[n/i]==1)
                    cout<<n/i;
        }
}
int main()
{
    cin>>n;
    xl();
    return 0;
}
