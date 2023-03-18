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
vector<int> ary; // 1차원 배열
//queue<int> q; // 큐
//stack<int> s; // 스택

//for문 간단하게.
#define FOR(i, n) for(int i = 0; i < (n); i++)


int main(){
	// 혹시나 cin, cout을 쓰게 딘다면...
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

    // w = 2차원의 너비, h = 2차원의 너비  
    int w, h;
    cin >> h >> w;

    ary = vector<int>(w, 0);

    FOR(i, w)
        cin >> ary[i];

	int result = 0;

    // 계산을 위한 변수... 블럭을 하나하나 쌓아갈거임. 이 평면에
    vector<int> blocks = vector<int>(1, ary[0]);

    for(int i = 1; i < w; i++){
        if(blocks.back() < ary[i]){
            // 물이 차는 최대 높이 설정
            // 제일 처음과 제일 끝의 높이를 비교해서 낮은걸로 최대높이 설정
            int temp = (blocks[0] > ary[i]) ? ary[i] : blocks[0];
            for(int j = 1; j < blocks.size(); j++){
                if(blocks[j] < temp){
                    result += temp-blocks[j];
                    blocks[j] = temp;
                }
            }
        }
        blocks.push_back(ary[i]);

        if(blocks[0] < ary[i])
            blocks = vector<int>(1, ary[i]);
    }

    cout << result;
	
}