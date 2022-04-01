#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int k,a[26]={0},o=0;
    int n;
    string s;
    getline(cin,s);
    n=s.length();
    string s1(n/2,'_');
    /*////////////////
    s1[n/2]='y';
    s1[0]='w';s1[5]='t';s[1]='o';
    cout<<a[25]<<a[7];
    ////////////////*/
    for(int i=0;i<n;i++)a[(int)s[i]-65]++;
    for(int i=0;i<26;i++)if(a[i]%2){o++;k=i;}
    if(o>1){cout<<"NO SOLUTION";return 0;}
    if(n%2)
    {
        char ss;
        if(o!=1){cout<<"NO SOLUTION";return 0;}
        ss=(char)(k+65);
        a[k]--;
        for(int i=n/2-1;i>=0;)
        {
            for(int j=0;j<26;)
            {
                if(a[j]!=0){s1[i]=(char)(j+65);cout<<s1[i];i--;a[j]=a[j]-2;}
                else j++;
            }
        }
        cout<<ss<<s1;
        /*for(int i=0;i<n/2;i++)cout<<s1[i];
        cout<<s1[n/2];
        for(int i=n/2+2;i<=n;i++)cout<<s1[n-i];
        */
        return 0;
    }
    if(o!=0){cout<<"NO SOLUTION";return 0;}
    for(int i=n/2-1;i>=0;)
        {
            for(int j=0;j<26;)
            {
                if(a[j]!=0){s1[i]=(char)(j+65);cout<<s1[i];i--;a[j]=a[j]-2;}
                else j++;
            }
        }
    cout<<s1;
    return 0;
}
