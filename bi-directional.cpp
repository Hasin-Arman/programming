#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
/*
3 4
0 1
1 0
2 0
0 2
*/

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    int adj_matrix[nodes][nodes];

    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < edges; j++)
        {
            adj_matrix[i][j] = 0;
        }
    }


        for (int j = 0; j < edges; j++)
        {
            int u, v;
            cin >> u >> v;
            adj_matrix[u][v] = 1;
        }
        bool directional=true;
        for (int i = 0; i < nodes; i++)
        {
            for (int j = 0; j < edges; j++)
            {
                if (adj_matrix[i][j] == 1 && adj_matrix[j][i]==1)
                {
                    directional=true;
                }
                else if (adj_matrix[i][j] == 1 && adj_matrix[j][i]!=1)
                {
                    directional=false;
                }
            }
        }

        if (directional)
        {
            cout << "The graph is Bi-directional" << endl;
        }
        else
        {
            cout << "The graph is not Bi-directional" << endl;
        }
}
