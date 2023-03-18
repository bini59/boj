#include <iostream>

#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    priority_queue<int> qM, qm;

    int n;
    int temp;
    int N;
    cin >> N;
    cin >> n;
    cout << n << endl;
    for(int i = 0; i < N-1; i++){
        cin >> temp;

        if(qm.size() == qM.size() ){
            if(temp > n){
                qm.push(-temp);
            }
            else{
                qM.push(temp);
                qm.push(-n);
                n = qM.top();
                qM.pop();
            }
        }
        else if(qm.size() > qM.size()){
            if(temp < n){
                qM.push(temp);
            }
            else{
                qM.push(n);
                qm.push(-temp);
                n = -qm.top();
                qm.pop();
            }
        }
        printf("%d\n", n);
            
    }
    return 0;
}