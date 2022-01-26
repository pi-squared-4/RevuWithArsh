#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool topoSort(vector<int> adj[], int V, vector<int> &res)
    {
        vector<int> indegree(V, 0);
        // count indegree of every vertex
        for (int i = 0; i < V; i++)
        {
            for (auto u : adj[i])
            {
                indegree[u]++;
            }
        }
        queue<int> q;
        // push vertices having indegrees 0
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (auto v : adj[u])
            {
                //  reducing its indegree by 1
                indegree[v]--;
                // if indegree = 0 then push it to queue
                if (indegree[v] == 0)
                    q.push(v);
            }
            res.emplace_back(u);
        }
        return res.size() != V;
    }
    vector<int> findOrder(int n, vector<vector<int>> &pre)
    {
        vector<int> adj[n];
        int count = 0;
        for (int i = 0; i < pre.size(); i++)
        {
            int u = pre[i][0];
            int v = pre[i][1];
            adj[v].push_back(u);
        }
        vector<int> res;
        if (topoSort(adj, n, res))
        {
            res.clear();
        }
        return res;
    }
};

int main(){

}