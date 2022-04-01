#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,n1;
    cin>>n;
    n1=1;
    long long int p=0;
    while(n1<=n)
    {
        p++;
        n1*=5;
    }
    p--;
    long long int sum=0;
    for(int i=1;i<=p;i++)
    {
        sum=sum+n/pow(5,i);
    }
    cout<<sum;
}
