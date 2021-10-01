edge = {}
vertex =[]

# Add Directed Graph
def add_e(u, v):
    tmp = []
    if u in edge:
        tmp.extend(edge[u])
    tmp.append(v)
    edge[u] = tmp

# Add Undirected Graph
def add_Uedge(u, v):
    add_e(u, v)
    add_e(v, u)

# Depth First Search
# U -> Now Vertex
# P -> Parent of Now Vertex
def dfs(u, p):
    for x in edge[u]:
        if x == p:
            continue
        print(str(u) + " -> " + str(x))
        dfs(x, u)

# Breadth First Search
# S -> Start Vertex
# N -> Number of Vertex
def bfs(s, n):
    visited = [False for i in range(n + 1)]
    q = []
    q.append(s)
    while q:
        now = q.pop(0)
        if visited[now]:
            continue
        visited[now] = True
        for x in edge[now]:
            if not visited[x]:
                print(str(now) + " -> " + str(x))
                q.append(x)
    

s = input()
# n -> Number of Vertex
# m -> Number of Edges
n, m = map(int, s.split())
for i in range(m):
    u, v = map(int, input().split())
    add_Uedge(u, v)

stp = int(input())
print('Depth First Search')
dfs(stp, 0)
print('Breadth First Seach')
bfs(stp, n)
