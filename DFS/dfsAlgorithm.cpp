#include<bits/stdc++.h>

using namespace std;

void edge(vector<int>adj[], int u, int v){
  adj[u].push_back(v);
}

void dfs(int s, vector<int>adj[], bool visit[]){
  stack<int> stk;
  stk.push(s);
  visit[s] = true;

  while(!stk.empty()){
    int u = stk.top();
    cout << u <<" ";
    stk.pop();

    for(int i = 0;i < adj[u].size(); i++){
      if(!visit[adj[u][i]]){
        stk.push(adj[u][i]);
        visit[adj[u][i]] = true;
      }
    }
  }
}

int main(){
    int edges, vertex;
    cin >> vertex >> edges;
    vector<int>adj[vertex];

    int vertexA, vertexB;
    bool visit[vertex];

    for(int i = 0; i < vertex; i++){
        visit[i] = false;
    }

    for(int i = 0; i < edges; i++){
        cin >> vertexA >> vertexB;
        edge(adj, vertexA, vertexB);
    }    
    dfs(0,adj,visit);
    return 0;
}