// Dijkstras Algorithm implemented using C++

#include<bits/stdc++.h>    
using namespace std;

int minimumDist(int dist[], bool flag[]) 
{
	int min = INT_MAX, index;
              
	for(int i = 0; i < 6; i++) 
	{
		if(flag[i] == false && dist[i] <= min)      
		{
			min = dist[i];
			index = i;
		}
	}
	return index;
}

void dijkstraAlgo(int graph[6][6], int src)
{
	int dist[6]; 
	bool flag[6];
	
	for(int i = 0; i<6; i++)
	{
		dist[i] = INT_MAX;
		flag[i] = false;	
	}
	
	dist[src] = 0;  
	
	for(int i = 0; i < 6; i++)                           
	{
		int m = minimumDist(dist, flag);
		flag[m] = true;
		for(int i = 0; i < 6; i++)                  
		{
			if(!flag[i] && graph[m][i] && dist[m] != INT_MAX && dist[m] + graph[m][i] < dist[i])
				dist[i] = dist[m] + graph[m][i];
		}
	}
	for(int i = 0; i<6; i++)                      
	{
		char str = 65 + i;
		cout << str << "\t" << dist[i] <<endl;
	}
}

int main()
{
	int graph[6][6] = {
		{0, 10, 20, 0, 0, 0},
		{10, 0, 0, 50, 10, 0},
		{20, 0, 0, 20, 33, 0},
		{0, 50, 20, 0, 20, 2},
		{0, 10, 33, 20, 0, 1},
		{0, 0, 0, 2, 1, 0}};
	dijkstraAlgo(graph, 0);
	return 0;	                        
}
