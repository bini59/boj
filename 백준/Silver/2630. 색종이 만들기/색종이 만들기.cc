#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> paper;

vector<int> solution(int n, int left, int right){
    if(n == 0) return vector<int>(1, paper[left][right]);
    vector<int> temp;
    vector<int> temp2;
    int nn = pow(2, n - 1);
    temp = solution(n-1, left, right);
    temp2 = solution(n-1, left, right+nn);
    temp.insert(temp.end(), temp2.begin(),temp2.end());
    temp2 = solution(n-1, left+nn, right);
    temp.insert(temp.end(), temp2.begin(),temp2.end());
    temp2 = solution(n-1, left+nn, right+nn);
    temp.insert(temp.end(), temp2.begin(),temp2.end());



    if(temp.size() == 4){
        int i;
        for(i = 1; i < 4; i++){
            if(temp[0] != temp[i]) { i = 0; break;}
        }
        if(i == 4) temp = vector<int>(1, temp[0]);
    }
    return temp;
}

int main(){

    
    int n;
    scanf("%d", &n);
    paper = vector<vector<int>>(n, vector<int>(n, 0));

    int temp;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &temp);
            if(temp == 1) paper[i][j] = 1;
        }
    }
    
    vector<int> result = solution(log2(n), 0, 0);

    int res[2] = {0, 0};
    for(int i = 0; i < result.size(); i++){
        if(result[i] == 0)res[0]++;
        else res[1]++;
    }

    printf("%d\n%d", res[0], res[1]);


}