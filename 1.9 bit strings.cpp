#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int l=1;
    int n;
    cin>>n;
    while(n)
    {
        l=(l*2)%1000000007;
        n--;
    }
    cout<<l;
}
