class Solution(object):
    def minimumEffortPath(self, heights):
        """
        :type heights: List[List[int]]
        :rtype: int
        """
        rows, cols = len(heights), len(heights[0])
        dist = [[float('inf')] * cols for _ in range(rows)]
        dist[0][0] = 0
        
        pq = [(0, 0, 0)]
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        
        while pq:
            d, r, c = heapq.heappop(pq)
            
            if r == rows - 1 and c == cols - 1:
                return d
            if d > dist[r][c]:
                continue
                
            for dr, dc in directions:
                nr, nc = r + dr, c + dc
                
                if 0 <= nr < rows and 0 <= nc < cols:
                    new_effort = max(d, abs(heights[r][c] - heights[nr][nc]))
                    
                    if new_effort < dist[nr][nc]:
                        dist[nr][nc] = new_effort
                        heapq.heappush(pq, (new_effort, nr, nc))
        return 0