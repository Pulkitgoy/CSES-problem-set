#include<iostream>
#include<math.h>
using namespace std;
void toh(int n,int b,int m,int e)
{
    if(n>1)toh(n-1,b,e,m);
    cout<<b<<" "<<e<<endl;
    if(n>1)toh(n-1,m,b,e);
}
int main()
{
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    toh(n,1,2,3);
}
