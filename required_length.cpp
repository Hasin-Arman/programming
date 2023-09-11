#include <bits/stdc++.h>
using namespace std;
int n, x;
bool result=true;
const int N=1e8;
int visited[N];
int level[N];
int digitCount(int x)
{
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    return count;
}
int  bfs(int x)
{
    queue<int> q;
    visited[x] = 1;
    level[x] = 0;
    q.push(x);
    while (!q.empty())
    {
        int head = q.front();
        visited[head]=1;
        q.pop();
        if(digitCount(head)==n){
            result=false;
            return level[head];
        }

        int tmp=0;
        while (head)
        {
            tmp = head % 10;
            if (visited[head*tmp] == 0)
            {
                    visited[head * tmp] = 1;
                    level[head*tmp] = level[head]+1;
                    q.push(head * tmp);
            }
           head=head/10;
        }
    }
}
int main()
{
    cin >> n >> x;
    if(result){
        cout << bfs(x);
    }
    else{
        cout<<"-1"<<endl;
    }
    
}