#include<bits/stdc++.h>
using namespace std;

int x[10]={-1,-1,-1,0,0,1,1,1};
int y[10]={-1,0,1,-1,1,-1,0,1};

int grid[1005][1005];

int dfs(int bx,int by,int n,int tx,int ty)
{

    if(bx==tx&&by==ty) return 1;
    if(bx<0||by<0||bx>n||by>n||grid[bx][by]==1) return 0;
     grid[bx][by]=1;

     int ans=0;
    for(int i=0;i<8;i++)
    {
        int xx=bx+x[i];
        int yy=by+y[i];
         ans=max(ans,dfs(xx,yy,n,tx,ty));
    }
    return ans;
}

int main()
{
   int n,ax,ay,bx,by,tx,ty;
   cin>>n;
   cin>>ax>>ay>>bx>>by>>tx>>ty;
   for(int i=0;i<n;i++)
   {
       int ax1=ax;
       int ay1=ay;
       while(ax1>=0&&ay1>=0&&ax1<=n&&ay1<=n)
       {
           grid[ax1][ay1]=1;
           ax1+=x[i];
           ay1+=y[i];
       }
   }
      if(dfs(bx,by,n,tx,ty))
        cout<<"YES\n";
      else cout<<"NO\n";
}



