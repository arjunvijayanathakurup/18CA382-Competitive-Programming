#include <bits/stdc++.h>

using namespace std;

typedef pair<long long,long long> pairLong;

vector<pairLong> adjList[10005];

void primsAlgo(long long num_vertex, long long num_edges) 
{
    vector<pairLong> parentW(num_vertex + 1);
    priority_queue<pairLong, vector<pairLong>, greater<pairLong> > pq;
    vector<long long> dist(num_vertex + 1);
    vector<bool> visited(num_vertex + 1);
    long long sum = 0ll;

    for(long long i = 1;i <= num_vertex; i++) {
        parentW[i] = pairLong(i, 0);
        dist[i] = INT_MAX;
        visited[i] = false;
    }
    
    pq.push(pairLong(0, 1));

    while(!pq.empty()){
        pairLong current = pq.top();
        pq.pop();
        long long vertexNow = current.second;
        long long weightEV = current.first;
        
        if(visited[vertexNow]) {
            continue;
        }
        
        sum += weightEV;
        visited[vertexNow] = true;

        for(long long i = 0; i < adjList[vertexNow].size(); i++) {
            long long vertexNext = adjList[vertexNow][i].first;
            long long weightV = adjList[vertexNow][i].second;
            
            if(!visited[vertexNext] && dist[vertexNext] > weightV) {
                pq.push(pairLong(weightV, vertexNext));
                parentW[vertexNext]=pairLong(vertexNow, weightV);
                dist[vertexNext] = weightV;
            }
        }
    }
    
    for(long long i = 2; i <= num_vertex; i++) {
        long long pVertex = parentW[i].first;
        long long weight = parentW[i].second;
        cout << pVertex << " - " << i << " w " << weight << endl; 
    }
}

int main()
{
  long long num_vertex, num_edges;
  cin >> num_vertex >> num_edges;
  int vertexA, vertexB, edgeWeight;

  for(int i = 0; i < num_edges; i++) {
    cin >> vertexA >> vertexB >> edgeWeight;
    adjList[vertexA].push_back(pairLong(vertexB,edgeWeight));
    adjList[vertexB].push_back(pairLong(vertexA,edgeWeight));
  }
  
  primsAlgo(num_vertex,num_edges);
}