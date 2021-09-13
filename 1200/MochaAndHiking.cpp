#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//directed unweighted graph

void bfs(int i, bool *visited, vector<vector<int>> graph)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;

    while (!q.empty())
    {
        int node = q.front();
        cout << node << ' ';
        q.pop();
        visited[node] = true;

        for (int x = 0; x < graph[node].size(); x++)
        {
            if (!visited[graph[node][x]])
            {
                q.push(graph[node][x]);
                visited[graph[node][x]] = true;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n; //vertices and edges
        n++;

        vector<vector<int>> graph(n + 1);
        bool *visited = new bool[n + 1];
        for (int i = 0; i < n + 1; i++)
        {
            visited[i] = false;
        }

        for (int i = 1; i < n; i++)
        {
            graph[i].push_back(i + 1);
        }

        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (x)
            {
                graph[n].push_back(i);
            }
            else
            {
                graph[i].push_back(n);
            }
        }

        //queue<int> q;

        for (int i = 1; i < graph.size(); i++)
        {
            for (int j = 0; j < graph[i].size(); j++)
            {
                cout << i << "->" << graph[i][j] << ' ';
            }
            cout << endl;
        }

        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                bfs(i, visited, graph);
            }
        }
        cout << endl;

        delete[] visited;
    }
}