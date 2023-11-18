#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <set>
#include <list>
using namespace std;

void printAdjList(unordered_map<int, set<int>> adj){
    for(auto i:adj){
        cout << i.first << "-> ";
        for(auto j:i.second){
            cout << j << ", ";
        }
        cout << endl;
    }
}

void dfs(int node, unordered_map<int, bool> &visited, 
    unordered_map<int,list<int>> &adj, vector<int> &component){
        component.push_back(node);
        visited[node] = true;

        for(auto i :adj[node]){
            if(!visited[i]){
                dfs(i,visited,adj, component);
            }
        }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int,list<int>> adj;

    for (int i = 0; i < edges.size(); i++) {
      int u = edges[i][0];
      int v = edges[i][1];

      adj[u].push_back(v);
      adj[v].push_back(u);
    }
        vector<vector<int>> ans;
        unordered_map<int, bool> visited;

        for(int i = 0; i < V; i++){

            if((!visited[i])){
                vector<int> component;
                dfs(i,visited,adj,component);
                ans.push_back(component);
            }

        }

        return ans;
    
}

int main(){
    vector<vector<int>> adj = {
        {0,1},
        {0,2},
        {0,3},
        {1,4},
        {1,7},
        {2,5},
        {3,6}
    };

    vector<vector<int>> result = depthFirstSearch(4, 5, adj);

    for(auto e : result){
        for(auto i : e){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}