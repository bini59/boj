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
typedef long long ll;


//자주 쓸 데이터들
//vector<vector<int>> pln; // 2차원 배열
//vector<int> ary; // 1차원 배열
//queue<int> q; // 큐
//stack<int> s; // 스택

//for문 간단하게.
#define FOR(n) for(int i = 0; i < (n); i++)

template <typename T>
ostream &operator<<(ostream &out, vector<T> arr){
    FOR(arr.size()) out << arr[i] << " ";
    return out;
}

template <typename T>
ostream &operator<<(ostream &out, pair<T *, int>arr){
    FOR(arr.second) out << arr.first[i] << " ";
    return out;
}

class segmentTree{
    public:
        int n;
        ll *tree;
        ll *arr;
        // constructor
        segmentTree(int n) {this->n = n; tree = new ll[2*n]; arr = new ll[n];}

        void init(){
            for (int i = n; i < 2 * n; i++) this->tree[i] = arr[i - n];
            for (int i = n-1; i > 0; i--) this->tree[i] = this->tree[i<<1] + this->tree[i<<1|1];
        }

        void update(int index, ll diff){
            for (tree[index += n] += diff; index > 1; index >>= 1 ) tree[index >> 1] = tree[index] + tree[index ^ 1];
        }

        ll query(int l, int r){
            ll res = 0;
            for (l += n, r += n + 1; l < r; l >>= 1, r >>= 1){
                if(l&1) res += tree[l++];
                if(r&1) res += tree[--r];
            }
            return res;
        }
};

int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n;
    cin >> a >> b;
    segmentTree tree(n);
    for (int i = 0; i < n; i++) cin >> tree.arr[i];
    tree.init();

    ll x, y, z;
    for (int i = 0; i < a + b; i++){
        cin >> x >> y >> z;
        if(x == 1){
            ll diff = z - tree.arr[y - 1];
            tree.arr[y - 1] += diff;
            tree.update(y - 1, diff);
        }
        else{
            cout << tree.query(y-1, z-1) << "\n";
        }
    }
}