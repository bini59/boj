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
//typedef long long ll;


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

typedef struct _gear{
    char mags[9];
    int left = 6;
} Gear;

void rotate(Gear (&gears)[4], int before, int index, int d) {
    int left = index - 1;
    int right = index + 1;
    if(before != left && left > -1){
        int left_index = (gears[left].left + 4) % 8;
        if(gears[left].mags[left_index] != gears[index].mags[gears[index].left]){
            rotate(gears, index, left, (d + 1) % 2);
        }
    }

    if(before != right && right < 4) {
        int now_index = (gears[index].left + 4) % 8;
        if(gears[right].mags[gears[right].left] != gears[index].mags[now_index]) {
            rotate(gears, index, right, (d + 1) % 2);
        }
    }

    // d = 0 시계방향, d = 1 반시계방향
    if(d == 0){
        gears[index].left = (gears[index].left + 7) % 8;
    }
    else{
        gears[index].left = (gears[index].left + 1) % 8;
    }

} 

int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

    Gear gears[4];
    for (int i = 0; i < 4; i++){
        cin >> gears[i].mags;
    }

    int k;
    cin >> k;
    int index, direction;
    for (int i = 0; i < k; i++){
        cin >> index >> direction;
        direction = direction == 1 ? 0 : 1;
        rotate(gears, -1, index-1, direction);

        // cout << i << "th index, direction " << index << ", " << direction << "\n";
    }

    int result = 0;
    for (int i = 0; i < 4; i++){
        int north_index = (gears[i].left + 2) % 8;
        result += gears[i].mags[north_index] == '0' ? 0 : 1 << i;
        // cout << i << "'s gear left is " << gears[i].left << "\n";
    }

    cout << result;
}