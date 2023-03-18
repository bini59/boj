import sys

computer = int(input())
link = {}
for i in range(1, computer+1):
    link[i] = []
for i in range(int(input())):
    x, y = map(int, sys.stdin.readline().split())
    link[x].append(y)
    if x not in link[y]:
        link[y].append(x)
def dfs(graph):
    visit = []
    stack = [1]

    while stack:
        node = stack.pop()
        if node not in visit:
            visit.append(node)
            stack += graph[node]
    
    return len(visit)-1

print(dfs(link))