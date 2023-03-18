/*
scanf, printf 쓰기.

cout 을 쓸때는 꼭 endl 말고 \n 쓰기.

아니면 밑에꺼 꼭 쓰기, 시간 개걸림.

*/

/*
범위 때문에 문제 안풀릴때는, 

index 0은 무시하고 1부터 시작해보기.. 은근 저거때문에 화날때가 많은거같음...

*/
//cin.tie(null); 
//ios::sync_with_stdio(false);


/*
꼭 데이터 범위 확인하기!!
long long 범위 잘 확인해서 풀기.
*/
//typedef long long ll;


//쓸거같은 STL 목록
#include <iostream>
#include <vector>
//#include <queue>
//#include <stack>
//#include <cmath>
//#include <algorithm>
#include <string>



using namespace std;

vector<vector<int>> map;

string res = "";

string sol(int N, int startX, int startY){
	if(N == 1){
		char a[3] = {map[startY][startX] + '0'};
		string t(a);
		return t;
	}
	
	vector<string> temp(4);
	temp[0] = sol(N/2, startX, startY);
	temp[1] = sol(N/2, startX+N/2, startY);
	temp[2] = sol(N/2, startX, startY+N/2);	
	temp[3] = sol(N/2, startX+N/2, startY+N/2);
	
	
	if(temp[0].length() == 1 && temp[1].length() == 1 && temp[2].length() == 1 && temp[3].length() == 1){
		bool t =  true;
		for(int i = 1; i < 4; i ++) if(temp[i] != temp[0]) t = false;
		
		if(t) return temp[0];
	}
	
	return "(" + temp[0] + temp[1] + temp[2] + temp[3] + ")";
	
}

int main(){
	int n;
	scanf("%d", &n);
	
	map = vector<vector<int>>(n+1, vector<int>(n+1, 0));
	
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j++) scanf("%1d", &map[i+1][j+1]);
	}
	cout << sol(n, 1, 1) << '\n';
}