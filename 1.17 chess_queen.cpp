#include <bits/stdc++.h>
using namespace std;
//int counter=0;
bool check(char **chess,int x,int y)
{
    for(int i=x-1;i>=0;i--)
        if(chess[i][y]=='Q')
            return false;
    for(int i=x-1,j=y-1;i>=0 && j>=0;i--,j--)
        if(chess[i][j]=='Q')
            return false;
    for(int i=x-1,j=y+1;i>=0 && j<8;i--,j++)
        if(chess[i][j]=='Q')
            return false;
    return true;
}

void chess_queen(char **chess,int x,int *counter)
{
    if(x==8)
    {
        (*counter)++;
        return;
    }
    for(int i=0;i<8;i++)
    {
        if(chess[x][i]!='*' && check(chess,x,i))
        {
            chess[x][i]='Q';
            chess_queen(chess,x+1,counter);
            chess[x][i]='.';
        }
    }
}

int main()
{
    char **chess;
    chess = new char*[8];
    for(int i=0;i<8;i++)
    {
        string s;
        cin>>s;
        chess[i]=new char[8];
        for(int j=0;j<8;j++)
            chess[i][j]=s[j];
    }
    int counter=0;
    chess_queen(chess,0,&counter);
    cout<<counter;
    return 0;
}
