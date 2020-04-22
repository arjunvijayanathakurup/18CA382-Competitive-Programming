#include<bits/stdc++.h>

using namespace std;

const int maxn = 10005;
struct edge
{
    int u, v, w;
};

vector<edge> graph, output;
int parent[maxn], mstValue = 0;

bool compare(edge a, edge b)
{
    return a.w < b.w;
}

int find(int r)
{
    if(parent[r] == r)
        return r;
    return parent[r] = find(parent[r]);
}

void initPar(int r)
{
    for(int i=0 ; i<r ; i++)
    {
        parent[i]=i;
    }
}
void kruskals_Algorithm(int n)
{
    sort(graph.begin(), graph.end(), compare); 
    initPar(n); 
    int cnt = 0;
    for(int i = 0 ; i < (int)graph.size() ; i++)
    {
        int uPr = find(graph[i].u);
        int vPr = find(graph[i].v);
        
        if(uPr!=vPr) 
        {
            if(cnt == (n-1))
                break;
            output.push_back(graph[i]);  
            mstValue += graph[i].w; 
            parent[uPr] = vPr; 
            cnt++;
        }
    }

}


int main()
{
    int n, e;
    cin >> n >> e;

    for(int i = 0 ; i < e ; i++)
    {
        int u, v, w;
        cin >> u >> v >>w;
        edge input;
        input.u=u;
        input.v=v;
        input.w=w;
        graph.push_back(input); 
    }

    kruskals_Algorithm(n); 
    cout<<"MST Value : "<<mstValue<<endl; 
    return 0;
}
