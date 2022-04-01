#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(1)
    {
        if(n<=1){cout<<1;break;}
        cout<<n<<" ";
        if(n%2)n=3*n+1;
        else n/=2;
    }
    return 0;
}

