#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    cout<<0;
    for(long long int i=2;i<=n;i++)
    {
        if(i==2)cout<<6<<endl;
        else if(i==3)cout<<28<<endl;
        else cout<< (i*i*(i*i-1)-4*2-8*3-(i-4)*4*4-4*4-(i-4)*4*6-(i-4)*(i-4)*8)/2<<endl;
    }
}
