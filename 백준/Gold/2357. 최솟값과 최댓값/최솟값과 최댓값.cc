#include <vector>
#include <cstdio>
#include <cmath>

#define MAX 2000000000

using namespace std;

int segment(vector<int> &num, vector<int> &tree, int node, int start, int end);
int search_m(vector<int> &tree, int node, int start, int end, int left, int right);
int search_M(vector<int> &tree, int node, int start, int end, int left, int right);
int segment_M(vector<int> &num, vector<int> &tree, int node, int start, int end);


int min(int x, int y)
{
    if (x > y) return y;
    else return x;
}
int max(int x, int y)
{
    if (x > y) return x;
    else return y;
}


int main()
{
    int N, M;
    scanf("%d%d", &N, &M);

    vector <int> num(N);
    int size = 1 << ((int)ceil(log2(N))+1);
    vector <int> tree(size);
    vector <int> tree_M(size);

    
    for (int i = 0; i < N; i++) scanf("%d", &num[i]);
    
    segment(num, tree, 1, 0, N-1);
    segment_M(num, tree_M, 1, 0, N-1);
    int x, y;
    for (int i = 0; i < M; i++)
    {
        scanf("%d%d", &x, &y);
        int answer_m = search_m(tree, 1, 0, N-1, x-1, y-1);
        int answer_M = search_M(tree_M, 1, 0, N-1, x-1, y-1);
        printf("%d %d\n", answer_m, answer_M);
    }

    return 0;
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

int segment_M(vector<int> &num, vector<int> &tree, int node, int start, int end)
{   
    if (start == end)
    {
        return tree[node] = num[start];
    }
    else
    {
        segment_M(num, tree, node * 2, start, (start + end) / 2);
        segment_M(num, tree, node * 2 + 1, (start + end) / 2 + 1, end);
        return tree[node] = max(tree[node*2], tree[node*2+1]);
    }
}

int search_m(vector<int> &tree, int node, int start, int end, int left, int right)
{

    if (left > end || right < start) return MAX;
    if (left <= start && end <= right) return tree[node];
    
    int x = search_m(tree, node * 2, start, (start + end) / 2, left, right);
    int y = search_m(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);   
    return min(x, y);

}

int search_M(vector<int> &tree, int node, int start, int end, int left, int right)
{

    if (left > end || right < start) return -1;
    if (left <= start && end <= right) return tree[node];
    
    int x = search_M(tree, node * 2, start, (start + end) / 2, left, right);
    int y = search_M(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);   
    return max(x, y);

}