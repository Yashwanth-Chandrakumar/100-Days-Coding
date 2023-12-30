from typing import List, Tuple

def printAdjacency(n: int, m: int, edges: List[Tuple[int, int]]) -> List[List[int]]:
    adjacency_list = [[] for _ in range(n)]

    for edge in edges:
        u, v = edge
        adjacency_list[u].append(v)
        adjacency_list[v].append(u)

    arr = [[] for _ in range(n)]
    for i in range(n):
        arr[i].append(i)
        for neighbor in adjacency_list[i]:
            arr[i].append(neighbor)

    return arr
