// #include<bits/stdc++.h>
// using namespace std;

// int array_sum(int ara[],int n){
//     if(n==1){
//         return ara[0];
//     }
//     return array_sum(ara,n-1)+ara[n-1];
// }

// int main(){
//     int n;
//     cin>>n;
//     int ara[n];
//     for(int i=0; i<n; i++){
//         cin>>ara[i];
//     }
//     int sum=array_sum(ara,n);
//     cout<<sum<<endl;
// }


#include <bits/stdc++.h>
using namespace std;
const int n = 1e6;
int visited[n];
vector<int> adj_list[n];
void bfs(int src)
{
    queue<int> q;
    visited[src] = 1;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 1;
    bfs(src);

    if (visited[node] == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    else{
        cout <<"YES"<< endl;
    }
    return 0;
}