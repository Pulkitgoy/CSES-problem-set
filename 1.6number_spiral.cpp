#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int x,y;
        long long int z=0;
        cin>>x>>y;
        if(x-1==0 && y-1==0){cout<<1<<endl;continue;}
        if(x>y)
        {
            z+=1+x*(x-1);
            if(x%2==0)
            {
                z+=(x-y);
            }
            else{z-=(x-y);}
        }
        else
        {
            z+=1+y*(y-1);
            if(y%2)
            {
                z+=(y-x);
            }
            else{z-=(y-x);}
        }
        cout<<z<<endl;
    }
}
