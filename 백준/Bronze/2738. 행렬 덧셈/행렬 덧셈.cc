#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> matrix;
    int n, m;
    cin >> n >> m;
    
    matrix = vector<vector<int>>(n, vector<int>(m));
    int x;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> x;
            matrix[i][j] += x;
        }
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++)cout << matrix[i][j] << " ";
        cout << "\n";
    }
    
    return 0;
            
}