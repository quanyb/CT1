#include <bits/stdc++.h>
#define nmax 100001
using namespace std;
long res=0,n;
long a[nmax];
long demso(long u)
{
    long s=0;
    while(u>0)
    {
        s=s+1;
        u=u/10;
    }
    return s;
}
long tongcs(long u)
{
    long s=0;
    while(u>0)
    {
        s=s+u%10;
        u=u/10;
    }
    return s;
}
bool kt(long u)
{
    if(tongcs(u)%demso(u)==0) return true;
    else return false;
}
long sodep(long u)
{
    long p;
    a[0]=0;
    int i=1;
    while(i<=u)
    {
        p=a[i-1]+1;
        while(kt(p)==false)
            p++;
        a[i]=p;
        i++;
    }
    return a[u];
}
int main()
{
    cin>>n;
    cout<<sodep(n);
    return 0;
}
