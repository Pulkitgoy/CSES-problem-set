#include <bits/stdc++.h>
using namespace std;
int counter=0;
void grid_path(int **dim , char grid[] , int x , int y , int path , int U , int D , int R , int L)
{
    //counter++;
    dim[x][y]=1;
    if(path==48 && R==L && D-U==6)
    {
        counter++;
        return ;
    }
    else if(path==48)
    {
        return ;
    }
    else if(R==L && D-U==6)
    {
        return;
    }
    if(grid[path]=='?')
    {
        if(R-L<=6 && y+1<7 && dim[x][y+1]==0)
        {
            grid_path(dim,grid,x,y+1,path+1,U,D,R+1,L);
            dim[x][y+1]=0;
        }
        if(R>L && y-1>=0 && dim[x][y-1]==0)
        {
            grid_path(dim,grid,x,y-1,path+1,U,D,R,L+1);
            dim[x][y-1]=0;
        }
        if(D>U && x-1>=0 && dim[x-1][y]==0)
        {
            grid_path(dim,grid,x-1,y,path+1,U+1,D,R,L);
            dim[x-1][y]=0;
        }
        if(D-U<=6 && x+1<7 && dim[x+1][y]==0)
        {
            grid_path(dim,grid,x+1,y,path+1,U,D+1,R,L);
            dim[x+1][y]=0;
        }
    }
    else
    {
        int X=x,Y=y;
        if(grid[path]=='U'){U++;X=x-1;}
        else if(grid[path]=='R'){R++;Y=y+1;}
        else if(grid[path]=='L'){L++;Y=y-1;}
        else {D++;X=x+1;}
        if(D-U>6 || U>D || R-L>6 || L>R || dim[X][Y]==1 || X<0 || X>6 || Y<0 || Y>6)
            return;
        else
        {
            x=X;
            y=Y;
            grid_path(dim,grid,x,y,path+1,U,D,R,L);
        }
    }
}

int main()
{
    int **dim=new int*[7];
    for(int i=0;i<7;i++)
    {
        dim[i]=new int[7];
        for(int j=0;j<7;j++)dim[i][j]=0;
    }
    char grid[48];
    cin>>grid;
    int U=1,D=1,R=1,L=1;
    grid_path(dim,grid,0,0,0,U,D,R,L);
    // for(int i=0;i<7;i++)
    // {
    //     for(int j=0;j<7;j++)cout<<dim[i][j]<<" ";
    //     cout<<endl;
    // }
    cout<<counter;
    return 0;
}
