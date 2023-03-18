/*

input
11
1 4 1 2 4 2 4 2 3 4 4
2
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int t;
    cin >> t;
    int res= 0;
    
    for(int i = 0; i < n; i++) if(arr[i] == t) res++;
    cout << res;
}