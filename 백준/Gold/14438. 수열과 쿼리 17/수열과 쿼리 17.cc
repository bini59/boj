//쓸거같은 STL 목록
#include <iostream>
#include <vector>
//#include <queue>
//#include <stack>
//#include <cmath>
//#include <algorithm>
//#include <string>

using namespace std;

/*
scanf, printf 쓰기.

cout 을 쓸때는 꼭 endl 말고 \n 쓰기.

아니면 밑에꺼 꼭 쓰기, 시간 개걸림.

*/



/*
범위 때문에 문제 안풀릴때는, 

index 0은 무시하고 1부터 시작해보기.. 은근 저거때문에 화날때가 많은거같음...
*/



/*
꼭 데이터 범위 확인하기!!
long long 범위 잘 확인해서 풀기.
*/
// typedef long long ll;


//자주 쓸 데이터들
//vector<vector<int>> pln; // 2차원 배열
//vector<int> ary; // 1차원 배열
//queue<int> q; // 큐
//stack<int> s; // 스택

//for문 간단하게.
#define FOR(n) for(int i = 0; i < (n); i++)


// print Vector<int>
void printVector(vector<int> arr){
	FOR((int)arr.size()){
		printf("%d ", arr[i]);
	}

	printf("\n");
}

// print Array<int>
void printArray(int *arr, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int init(int *tree, int *arr, int start, int end, int index){
    if(start == end) return tree[index] = arr[start+1];

    int mid = (start + end) / 2;

    int t1 = init(tree, arr, start, mid, index * 2);
    int t2 = init(tree, arr, mid+1, end, index * 2 + 1);

    return tree[index] = t1 > t2 ? t2 : t1;
}

int modify(int *tree, int start, int end, int node, int item, int index){
    if(index < start || index > end) return tree[node];

    if(start == end) {
        if(index == start)
            tree[node] = item;
        return tree[node];
    }
    int mid = (start + end) / 2;

    int t1 = modify(tree, start, mid, node * 2, item, index);
    int t2 = modify(tree, mid + 1, end, node * 2 + 1, item, index);

    return tree[node] = t1 > t2 ? t2 : t1;
}

int getmin(int *tree, int start, int end, int l, int r, int index){
    if(l <= start && r >= end) return tree[index];
    if(l > end || r < start) return 1987654321;
    int mid = (start + end) / 2;

    int t1 = getmin(tree, start, mid, l, r, index * 2);
    int t2 = getmin(tree, mid + 1, end, l, r, index * 2 + 1);

    return t1 > t2 ? t2 : t1;
}


int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	ios::sync_with_stdio(false);


    int n, m;
    cin >> n;
    int *arr = new int[n+1];
    int *tree = new int[n * 4 + 100];
    for (int i = 0; i < n; i++) cin >> arr[i+1];
    for (int i = 0; i < n * 4 + 100; i++) tree[i] = 0;
    init(tree, arr, 0, n-1, 1);

    // printArray(tree, n * 4 + 5);
    // printArray(arr, n + 1);

    cin >> m;

    int a, b, c;
    for (int i = 0; i < m; i++){
        cin >> a >> b >> c;
        if(a == 1){
            arr[b] = c;
            modify(tree, 1, n, 1, c, b);
            // printArray(tree, n * 4 + 5);
        }   
        else if (a == 2){
            printf("%d\n", getmin(tree, 1, n, b, c, 1));
        }
    }
}