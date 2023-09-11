#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
const long long INF = 1e18;
vector<pair<int, int>> adj_list[N];
int parent[N];
long long d[N];
int last_updated_node;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    bool negative_cycle = false;
    for (int i = 1; i <= n; i++)
    {
        for (int node = 1; node <= n; node++)
        {
            for (pair<int, int> adj_node : adj_list[node])
            {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if (d[u] + w < d[v])
                {
                    d[v] = d[u] + w;
                    parent[v] = u;
                    if (i == n)
                    {
                        negative_cycle = true;
                        last_updated_node = v;
                    }
                }
            }
        }
    }

    if (negative_cycle)
    {
        cout << "YES" << endl;
        int selected_node = last_updated_node;
        for (int i = 1; i <= n - 1; i++)
        {
            selected_node = parent[selected_node];
        }

        int first_node = selected_node;
        vector<int> cycle;
        cycle.push_back(first_node);
        while (true)
        {
            first_node = parent[first_node];
            cycle.push_back(first_node);
            if (first_node == selected_node)
            {
                break;
            }
        }

        reverse(cycle.begin(), cycle.end());

        for (auto node : cycle)
        {
            cout << node << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}