#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1){cout<<1;return 0;}
    if(n<=3){cout<<"NO SOLUTION";return 0;}
    int a[n];
    int j=1,k=n/2;
    for(int i=0;k+i<n;i++)
    {
        a[k+i]=j;
        j++;
        if(j==n+1)break;
        a[i]=j;
        j++;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
