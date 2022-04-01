#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int aa,diff,plast,in_pos_val,pos_val,d=1,k,in=1,f=9,pos,val=1;
        cin>>k;
        while(k>f)
        {
            val*=10;
            d++;
            in=f+1;
            f=in-1+(9*val)*d;

        }
        pos=k-in+1;
        if(pos%d==0)
        {
            pos_val=pos/d-1;
        }
        else
        {
            pos_val=pos/d;
        }
        in_pos_val=pos_val+val;
        plast=in-1+(in_pos_val-val)*d;
        diff=k-plast;
        while(diff--)
        {
            aa=in_pos_val/val;
            in_pos_val=in_pos_val%val;
            val/=10;
        }
        cout<<aa<<endl;
    }
    return 0;
}
