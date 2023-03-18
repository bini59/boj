#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef struct G{
	int n;
	vector<struct G*> childs;
}node;

void check(vector<node> &graph){
	printf("Graph : \n");
	for(int i = 0; i < graph.size(); i++){
		printf("%d : \n", graph[i].n);
		for(int j = 0; j < graph[i].childs.size(); j++) printf("%d ", graph[i].childs[j]->n);
		printf("\n");
	}
}

int bfs(vector<node> &graph, int size, int node){
	int result = 0;
	
	vector<bool> visited(size, false);
	queue<vector<int>> q;
	q.push({node, 0});
	visited[q.front()[0]] = true;
	
	while(!q.empty()){
		vector<int> temp = q.front();
		q.pop();
		for(int i = 0; i < graph[temp[0]].childs.size(); i ++){
			int t = graph[temp[0]].childs[i]->n-1;
			if(!visited[t]){
				q.push({t, temp[1]+1});
				visited[t] = true;
				result+= temp[1]+1;
			}
		}
	}
	return result;
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	vector<node> graph(n, {0, vector<struct G*>(0)});
	for(int i = 0; i < n; i++) graph[i].n = i+1;
	int a, b;
	for(int i = 0; i < m; i++){
		scanf(" %d%d", &a, &b);
		graph[a-1].childs.push_back(&graph[b-1]);
		graph[b-1].childs.push_back(&graph[a-1]);
	}
	int temp = bfs(graph, n, 0);
	int result = 0;
	for(int i = 1; i < n; i ++){
		int t = bfs(graph, n, i);
		if(temp > t){
			temp = t;
			result = i;
		}
	}
	printf("%d", result+1);
}