#include<iostream>
using namespace std;
int main()
{
    int n,v;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)a[i]=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>v;
        a[v-1]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cout<<i+1;
        }
    }
}
