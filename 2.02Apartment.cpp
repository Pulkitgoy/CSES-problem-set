#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long int c=0,n,m,k;
    cin>>n>>m>>k;
    long int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int x=0,y=0;
    while(1)
    {
        if(a[x]-k<=b[y] && a[x]+k>=b[y] && x<n && y<m){c++;x++;y++;}
        else if(a[x]>b[y] && y<m && x<n){y++;}
        else if(a[x]<b[y] && x<n && y<m){x++;}
        else break;
    }
    cout<<c;
}
//x
//1 5 15 42 50 58 59 65 81 96            k=1000 c=0
//18 59 65 67 68 71 80 83 92 97
//y
