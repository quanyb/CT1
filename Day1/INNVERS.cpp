#include <bits/stdc++.h>
#define nmax 100001
using namespace std;
int a[nmax],n,d=0;
/*void xl()
{
    for(int i=1;i<=n-1;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i]>a[j]) d++;
    cout<<d;
}
int main()
{
    cin>>n;
    for(int i=1;i<n;i++)
        cin>>a[i];
    xl();
    return 0;
}*/
long quicksort(int a[],int l,int m,int r){
    int n1=m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=a[m+1+i];
    }
    int i = 0,j=0,k=l;
    long res = 0;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            a[k++]=L[i++];
        }else{
            a[k]=R[j];
            j++;k++;
            res+=n1-i;
        }
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
    return res;
}
long xl(int a[],int l,int r)
{
    long res=0;
    if(l<r){
        int m = (l+r)/2;
        res+=xl(a,l,m);
        res+=xl(a,m+1,r);
        res+=quicksort(a,l,m,r);
    }
    return res;
}
int main(){
    int n,a[nmax];
    cin>>n;
    for(int i = 0;i<n;i++) cin>>a[i];
    cout<<xl(a,0,n-1);
    return 0;
}
