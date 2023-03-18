#include <cstdio>
#include <queue>
#include <vector>
#include <map>

using namespace std;

int main(){

    int n;
    scanf("%d", &n);
    vector<int> array(n, 0);
    priority_queue<int> min;
    int temp;
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
        min.push(-array[i]);
    }

    map<int, int> dic; 
    int i = 1;
    while(!min.empty()){
        if(!dic[-min.top()]) dic[-min.top()] = i++;
        min.pop();
    }

    for(int i = 0; i < n; i ++) printf("%d ", dic[array[i]]-1);
    
}