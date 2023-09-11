#include <bits/stdc++.h>
using namespace std;
const int maxN = 1010;
int grid[maxN][maxN];
int visited[maxN][maxN];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
char dir[4] = { 'D','R','U','L' };
int n,m,sum=0;
int dfs(int x, int y){
   
}

int main() {
    int max_value=0;
    cin >> n >> m;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            if(grid[i][j]!=0 && visited[i][j]!=0){
                int value=dfs(i,j)+grid[i][j];
                max_value=max(max_value,value);
            }
        }
    }
    return 0;
}