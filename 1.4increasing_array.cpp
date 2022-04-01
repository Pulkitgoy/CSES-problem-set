#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int m=0,a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        {
            if(a[i]<a[i-1])
            {
                m+=a[i-1]-a[i];
                a[i]=a[i-1];
            }
        }
    }
    cout<<m;
}
