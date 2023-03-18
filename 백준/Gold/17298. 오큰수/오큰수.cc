#include <stack>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

typedef struct{
    int num;
    int index;
}element;

stack<element> Stack;
vector<int> result;

int main(){
    int n;
    string numString;

    scanf("%d", &n);
    for(int i = 0; i < n; i ++)
        result.push_back(0);

    getchar();
    getline(cin, numString);

    istringstream ssl(numString);
    int i = 0;
    
    for (int n; ssl >> n;){
        while(!Stack.empty() && Stack.top().num < n){
            result[Stack.top().index] = n;
            Stack.pop();
        }
        element temp;
        temp.num = n;
        temp.index = i++;
        Stack.push(temp);
    }
    while(!Stack.empty()){
        result[Stack.top().index] = -1;
        Stack.pop();
    }
    for(int i = 0; i < n; i++){
        printf("%d ", result[i]);
    }
}
