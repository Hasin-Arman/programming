#include <bits/stdc++.h>
using namespace std;
const int N = 2e6;
vector<int> adj_list[N];
int st,ed;
int visited[N];
int parent[N];
bool cycle_detector(int src)
{
    visited[src] = 1;
    for (int adj_node : adj_list[src])
    {
        if (parent[src] == adj_node)
        {
            continue;
        }

        if (visited[adj_node] == 0)
        {
            parent[adj_node] = src;
            bool cycle = cycle_detector(adj_node);
            if (cycle)
            {
                return true;
            }
        }

        if (visited[adj_node] == 1)
        {
            st=src;
            ed=adj_node;
            return true;
        }
    }
    visited[src] = 2;
    return false;
}
int main()
{
    int n, m;
    vector<int> v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bool cycle_exist = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            bool cycle_detected = cycle_detector(i);
            if (cycle_detected)
            {
                cycle_exist = true;
                break;
            }
        }
    }

    if (cycle_exist)
    {
        vector<int>path;
        int temp=st;
        path.push_back(st);

        while(temp!=ed){
            path.push_back(parent[temp]);
            temp=parent[temp];
        }
        path.push_back(st);
        cout<<path.size()<<endl;
        for(auto it:path){
            cout<<it<<" ";
        }
    }

    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}