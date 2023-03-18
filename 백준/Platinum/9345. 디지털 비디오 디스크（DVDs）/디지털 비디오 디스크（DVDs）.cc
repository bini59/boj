#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

typedef vector<int> element;

void check(vector<element> &tree){
    printf("tree : \n");
    for(int i = 0; i < tree.size(); i++){
        printf("%d %d\n", tree[i][0], tree[i][1]);
    }
}


void init(vector<element> &tree, int n){
    for (int i = n-1; i > 0; --i){
        element a = tree[i<<1];
        element b = tree[i<<1|1];
        if(a[0] < b[0])
            tree[i][0] = a[0];
        else
            tree[i][0] = b[0];

        if(a[1] > b[1])
            tree[i][1] = a[1];
        else
            tree[i][1] = b[1];
    }
}

void update(vector<element> &tree, int n, int num, int size){
    for(tree[n += size] = {num, num}; n > 1; n >>= 1){
        element a = tree[n];
        element b = tree[n^1];

        if(a[0] < b[0])
            tree[n>>1][0] = a[0];
        else
            tree[n>>1][0] = b[0];

        if(a[1] > b[1])
            tree[n>>1][1] = a[1];
        else
            tree[n>>1][1] = b[1];
    }
}

element checkDVD(vector<element> &tree, int left, int right, int size){
    element res = {100001, -1};
    for (left += size, right += size; left < right; left >>= 1, right >>= 1) {
        if (left&1) {
            if(res[0] > tree[left][0])
                res[0] = tree[left][0];
            if(res[1] < tree[left][1])
                res[1] = tree[left][1];
            left++;
        }
        if (right&1) {
            right--;
            if (res[0] > tree[right][0])
                res[0] = tree[right][0];
            if (res[1] < tree[right][1])
                res[1] = tree[right][1];
        }
    }
    return res;
}



inline void solution(int a,int b){  
    vector<element> tree(a*2, element(2));
    vector<int> array(a);

    for(int i = 0; i < a; i ++){
        tree[a+i] = {i, i};
        array[i] = i;
    }

    init(tree, a);
    int command, num1, num2;
    for (int i = 0; i < b; i ++){
        scanf(" %d%d%d", &command, &num1, &num2);
        if (command == 1){
            element temp = checkDVD(tree, num1, num2+1, a);
            if ((temp[0] == num1) && (temp[1] == num2))
                printf("YES\n");
            else
                printf("NO\n");
        }
        else{
            update(tree, num1, array[num2], a);
            update(tree, num2, array[num1], a);
            int temp = array[num1];
            array[num1] = array[num2];
            array[num2] = temp;
        }
        
    }

}

int main(){
    int n;
    scanf("%d", &n);
    int a, b;
    for(int i = 0; i < n; i++){
        scanf(" %d %d", &a, &b);
        solution(a, b);
    }
}