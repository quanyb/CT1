#include <bits/stdc++.h>
using namespace std;
int res=0;
int a,b,c,d,x;
void xl()
{
    for(int a=1;a<=x;a++)
        for(int b=a;b<=x;b++)
            for(int c=b;c<=x;c++)
                for(int d=c;d<=x;d++)
                    if(a+b+c+d==x)
                        res++;
}
int main()
{
    cin>>x;
    xl();
    cout<<res;
    return 0;
}
