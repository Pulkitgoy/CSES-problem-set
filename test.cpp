#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        getline(cin,s);
        if(n==1)
        {
            cout<<(int)s[0]-98<<endl;
            continue;
        }
        long int sum=k,k1=1;
        for(int i=2;i<n;i++)
        {
            if(i%2)sum+=k;
            for(int j=0;j<i/2;j++)
            {
                k1=(k1*k)%1000000007;
            }
            sum=(sum+k1)%1000000007;
        }
        long int kk=(int)s[0]-98;
        for(int i=1;i<n/2;i++)
        {
            if(n%2)sum=(sum+k)%1000000007;
            kk=(kk*k)%1000000007;
        }
        sum=(sum+kk)%1000000007;
        cout<<sum<<endl;
    }
}
