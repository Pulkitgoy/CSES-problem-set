#include<iostream>
using namespace std;
void permute(string s,int f,int l)
{
    if(f==l){cout<<s<<endl;}
    else
    {

    }
}
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    for(int round=n-1;round>0;round--)
    {
        for(int i=0;i<round;i++)
        {
            if(s[i]>s[i+1])
            {
                char a=s[i];
                s[i]=s[i+1];
                s[i+1]=a;
            }
        }
    }
    permute(s,0,n-1);
}
