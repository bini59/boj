#include <vector>
#include <cstdio>
#include <cmath>

#define MAX 2000000000

using namespace std;

int segment(vector<int> &num, vector<int> &tree, int node, int start, int end);
int search(vector<int> &tree, int node, int start, int end, int left, int right);

int min(int x, int y)
{
    if (x > y) return y;
    else return x;
}

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);

    vector <int> num(N);
    int size = 1 << ((int)ceil(log2(N))+1);
    vector <int> tree(size);

    
    for (int i = 0; i < N; i++) scanf("%d", &num[i]);
    
    segment(num, tree, 1, 0, N-1);

    int x, y;
    for (int i = 0; i < M; i++)
    {
        scanf("%d%d", &x, &y);
        int answer = search(tree, 1, 0, N-1, x-1, y-1);
        printf("%d\n", answer);
    }

}

int segment(vector<int> &num, vector<int> &tree, int node, int start, int end)
{
    if (start == end)
    {
        return tree[node] = num[start];
    }
    else
    {
        segment(num, tree, node * 2, start, (start + end) / 2);
        segment(num, tree, node * 2 + 1, (start + end) / 2 + 1, end);
        return tree[node] = min(tree[node*2], tree[node*2+1]);
    }
}

int search(vector<int> &tree, int node, int start, int end, int left, int right)
{

    if (left > end || right < start) return MAX;
    if (left <= start && end <= right) return tree[node];
    
    int x = search(tree, node * 2, start, (start + end) / 2, left, right);
    int y = search(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);   
    return min(x, y);

}