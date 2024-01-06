class Solution:
    def minimumOperationsToMakeEqual(self, x: int, y: int) -> int:
        queue = deque([(x, 0)])
        visited = {x}
        
        while queue:
            curr, steps = queue.popleft()
            
            if curr == y:
                return steps
            
            candidates = [curr - 1, curr + 1]
            if curr % 5 == 0:
                candidates.append(curr // 5)
            if curr % 11 == 0:
                candidates.append(curr // 11)
            
            for next_num in candidates:
                if next_num not in visited and 1 <= next_num <= 10**4:
                    queue.append((next_num, steps + 1))
                    visited.add(next_num)
        
        return -1
