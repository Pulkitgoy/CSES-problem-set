#include<iostream>
using namespace std;
int main()
{
    long long int n,sum=0,i;
    int c=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    sum=(n*(n+1))/2;
    i--;
    if(sum%2){cout<<"NO";return 0;}
    cout<<"YES"<<endl;
    long long int x=0,y=0,b1[n],b2[n];
    long long int s=sum/2;
    while(i>=0)
    {
        if(s-a[i]>=0 && c==0)
        {
            if(s-a[i]==0)
            {
                b2[y]=a[i];
                s=0;
                c=1;
            }
            b2[y]=a[i];
            s=s-a[i];
            y++;
        }
        else if(s==0 || s-a[i]<0)
        {
            b1[x]=a[i];
            x++;

        }
        i--;
    }
    y--;
    x--;
    if(b1[x]==1)
    {
        cout<<x+1<<endl;
        for(int i=x;i>=0;i--)cout<<b1[i]<<" ";
        cout<<endl;
        cout<<y+1<<endl;
        for(int i=y;i>=0;i--)cout<<b2[i]<<" ";
    }
    else
    {
        cout<<y+1<<endl;
        for(int i=y;i>=0;i--)cout<<b2[i]<<" ";
        cout<<endl;
        cout<<x+1<<endl;
        for(int i=x;i>=0;i--)cout<<b1[i]<<" ";
    }

}
