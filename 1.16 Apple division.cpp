#include <iostream>
using namespace std;

typedef long long ll;

//ll cost=1000000001;
void subdif(ll a[],int n,ll sum,ll arr,ll *cost)
{
    if(n==0)return;
    *cost=min(abs(arr-2*sum),*cost);
    subdif(a+1,n-1,sum+a[0],arr,cost);
    subdif(a+1,n-1,sum,arr,cost);
}
int main()
{
    int n;
    cin>>n;
    ll a[n],sum=0,arr=0,cost=1000000001;
    for(int i=0;i<n;i++){cin>>a[i];arr+=a[i];}
    subdif(a,n,sum,arr,&cost);
    cout<<cost<<endl;
    return 0;
}
