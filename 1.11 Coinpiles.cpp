#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int a,b;
        cin>>a>>b;
        if((a+b)%3==0 && a<=2*b && a*2>=b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
