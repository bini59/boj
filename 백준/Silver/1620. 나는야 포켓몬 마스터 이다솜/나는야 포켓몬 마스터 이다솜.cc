#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int main(){ ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    map<string, int> ency;
    string ency2[100001];

    int n,m;
    cin >> n >> m;
    string temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        ency[temp] = i+1;
        ency2[i] = temp;
    }
    for(int i = 0; i < m; i++){
        cin >> temp;
        if(temp[0] >= 'A' && temp[0] <= 'Z') cout << ency[temp] << '\n';
        else {
            int index = 0;
            for(int j = 0; j < temp.size(); j ++){
                index += (temp[j]-'0')*pow(10, temp.size()-j-1);
            }
            cout << ency2[index-1] << '\n';
        }
    }
}