#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> arr(n);
    for (int i = 0; i < n; i++) { scanf("%d", &arr[i]); }

    vector<int> stack;
    vector<char> _stack(n * 2, 0);

    bool state = true;
    stack.push_back(0);
    int temp = 1, j = 0, k = -1;
    while (1) {
        
        if (state)
        {
            if (arr[j] > stack[stack.size() - 1])
            {
                for (int i = temp; i < arr[j]; i++) { stack.push_back(i);  k++; _stack[k] = 1;}
                temp = arr[j] + 1; k++; _stack[k] = 1; k++;
                if (arr[j] == n) { state = false; }
                j++;
            }
            else
            {
                if (stack[stack.size() - 1] == arr[j]) { stack.pop_back(); j++; k++; }
                else { _stack[n * 2 - 1] = 10; break; }
            }
        }
        else
        {
            if (stack.size() == 1) { break; }
            if (stack[stack.size() - 1] == arr[j]) { stack.pop_back(); j++; }
            else { _stack[n * 2 - 1] = 10; break; }
        }


    }

    if (_stack[_stack.size() - 1] == 10) { printf("NO"); }
    else
    {
        for (int i = 0; i < _stack.size(); i++)
        {
            if (_stack[i] == 0) { printf("-\n"); }
            else { printf("+\n"); }
        }
    }

    return 0;
}