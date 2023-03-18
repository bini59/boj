#include <iostream>
#include <vector>
using namespace std;
int main(){
    int res = 0;
    int n;
    for(int i = 0; i < 28; i++) {
        cin >> n;
        res += 1 << (n-1);
    }
    for(int i = 0; i < 30; i++){
        if(!(res & (1 << i))) cout << i+1 << "\n";
    }
    
    
    
}