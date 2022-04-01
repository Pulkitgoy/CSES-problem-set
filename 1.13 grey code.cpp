#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int main()
{
    int n,nm;
    cin>>n;
    nm=n;
    string a(n,'0'),b(n,'0');
    int nn=1;
    while(nm--)nn*=2;
    for(int i=0;i<nn;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(j==0){b[j]=a[j];continue;}
            if(a[j]==a[j-1])b[j]='0';
            else b[j]='1';
        }
        cout<<b<<endl;
        j=n-1;
        while(a[j]=='1' && j>=0)
        {
            a[j]='0';
            j--;
        }
        if(j==-1)break;
        a[j]='1';
    }
}
