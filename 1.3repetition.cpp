#include<iostream>
#include<string>
using namespace std;
int main()
{
    int m=1,c=1;
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])c++;
        else c=1;
        if(c>m)m=c;
    }
    cout<<m;
}
