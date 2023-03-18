/*
scanf, printf 쓰기.

cout 을 쓸때는 꼭 endl 말고 \n 쓰기.

아니면 밑에꺼 꼭 쓰기, 시간 개걸림.
*/
//cin.tie(null); 
//ios::sync_with_stdio(false);


/*
꼭 데이터 범위 확인하기!!
long long 범위 잘 확인해서 풀기.
*/
//typedef long long ll;


//쓸거같은 STL 목록
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <cmath>
//#include <algorithm>

#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

typedef struct G{
	int n;
	vector<struct G*> childs;
}node;

int bfs(vector<node> &graph, int size, int target, int start){
	int result = 10000000;
	
	vector<bool> visited(size, false);
	queue<vector<int>> q;
	q.push({start, 0});
	visited[q.front()[0]] = true;
	
	while(!q.empty()){
		vector<int> temp = q.front();
		q.pop();
		for(int i = 0; i < graph[temp[0]].childs.size(); i ++){
			int t = graph[temp[0]].childs[i]->n;
			if(t > size) continue;
			if(t == target && !visited[t]){
				if(temp[1]+1 < result){
					result = temp[1] + 1;
					continue;
				}
			}
				
			if(!visited[t]){
				q.push({t, temp[1]+1});
				visited[t] = true;
			}
		}
	}
	return result;
}


void check(vector<node> &graph){
	printf("Graph : \n");
	for(int i = 0; i < graph.size(); i++){
		printf("%d : \n", graph[i].n);
		for(int j = 0; j < graph[i].childs.size(); j++) printf("%d ", graph[i].childs[j]->n);
		printf("\n");
	}
}

int main(){
	int result = 0;
	int n, m;
	scanf("%d%d", &n, &m);
	int size = max(n, m)+2;
	
	vector<node> graph(size, {0, vector<struct G*>(0)});
	
	for(int i = 0; i < size; i++) graph[i].n = i;
	for(int i = 1; i < size; i++){
		graph[i].childs.push_back(&graph[i-1]);
		graph[i-1].childs.push_back(&graph[i]);
	}
	for(int i = 0; i < ceil(float(size)/2); i++){
		graph[i].childs.push_back(&graph[i*2]);
	}

	if(m != n) printf("%d", bfs(graph, size, m, n));
	else printf("0");


}