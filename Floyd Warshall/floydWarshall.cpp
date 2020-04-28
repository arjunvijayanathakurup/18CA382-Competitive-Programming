// Floyd Warshall algorithm implemented in C++

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef map<int, multiset<ii> > adj_list;
typedef vector<ii> vii;
typedef map<int, int> mii;
const int INF = 9999999;

const int n = 400;

void floyd_warshall(int AdjMat[][n], int par[][n], int V) {
    for(int k = 0; k < V; k++)
        for(int i = 0; i < V; i++)
            for(int j = 0; j < V; j++)
                if(AdjMat[i][k]+AdjMat[k][j] < AdjMat[i][j]) {
                    AdjMat[i][j] = AdjMat[i][k]+AdjMat[k][j];
                    par[i][j] = par[k][j]; // update parent
                } }

int main() {

    int AdjMat[n][n], par[n][n];
    int V, E, u, v, w;
    cin >> V >> E;

    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            AdjMat[i][j] = INF;
            par[i][j] = i; }
        AdjMat[i][i] = 0; }

    for(int i = 0; i < E; i++) {
        cin >> u >> v >> w;
        AdjMat[u][v] = w; // directed graph
    }

    floyd_warshall(AdjMat, par, V);

    for(int j = 0; j < V; j++) {
        if(AdjMat[0][j] != INF) {
            cout << "0 -> " << j << " = " << AdjMat[0][j] << endl; } }

    return 0;
  }
