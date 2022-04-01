#include<bits/stdc++.h>
using namespace std;
int  mmerge(long int a[],int l,int m,int h)
{
    int i=l,j=m+1,k=0;
    long int b[h-l+1];
    while(i<=m && j<=h)
    {
        if(a[i]>a[j])
        {
            b[k]=a[j];
            j++;
            k++;
        }
        else
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<=m)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=h)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(int x=l;x<=h;x++)a[x]=b[x-l];
}
void merge_sort(long int a[],int l,int h)
{
    int m=(l+h)/2;
    if(m>l)merge_sort(a,l,m);
    if(m+1<h)merge_sort(a,m+1,h);
    mmerge(a,l,m,h);
}
int main()
{
    int n,t=1;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    merge_sort(a,0,n);
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])t++;
    }
    cout<<t;
}
