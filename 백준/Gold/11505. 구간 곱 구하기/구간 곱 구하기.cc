#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

typedef long long element;

const element mod = 1000000007;

element update(vector<element> &tree, int start, int end, int node, int index, int num){
    if (index < start || index > end) return tree[node];
    if(start == end){
        if(start==index)
            return tree[node] = num;
        else
            return tree[node];
    }
    else
        return tree[node] = (update(tree, start, (start+end)/2, node*2, index, num) * update(tree, (start+end)/2+1, end, node*2+1, index, num))%mod;
    
}

element multiple(vector<element> &tree, int node, int start, int end, int left, int right){
    if(left > end || right < start)
        return 1;
    if(left <= start && right >= end)
        return tree[node];
    return (multiple(tree, node*2, start, (start+end)/2, left, right) * multiple(tree, node*2+1, (start+end)/2+1, end, left, right))%mod;
}
void check(vector<element> &tree){
    printf("tree : \n");
    for(int i = 0; i < tree.size(); i++){
        printf("%lld\n", tree[i]);
    }
}

int main(){
    int n, m, k;

    scanf("%d %d %d", &n, &m, &k);
    vector<int> array(n);
    for(int i = 0; i < n; i ++)
        scanf("%*c%d", &array[i]);
    
    int treeSize = int(ceil(log2(n)));
    treeSize = (1 << (treeSize+1))+1;
    vector<element> tree(treeSize);
    for(int i = 0; i < n; i++){
        update(tree, 0, n-1, 1, i, array[i]);
    }
    
    int command, num1, num2;
    for(int i = 0; i < m+k; i++){
        scanf("%*c%d %d %d", &command, &num1, &num2);
        if(command == 1){
            update(tree, 0, n-1, 1, num1-1, num2);
        }
        else{
            printf("%lld\n", multiple(tree, 1, 0, n-1, num1-1, num2-1));
        }
    }
}