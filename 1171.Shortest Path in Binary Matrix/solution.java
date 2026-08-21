class Solution {
    public int shortestPathBinaryMatrix(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        if(grid[0][0] == 1 || grid[n - 1][m - 1] == 1) {
            return -1;
        }
        Queue<int[]> q = new LinkedList<>();
        q.add(new int[] {0, 0, 1});

        int[] dr = {-1, -1, -1, 0, 0, 1, 1, 1};
        int[] dc = {-1, 0, 1, -1, 1, -1, 0, 1};

        int res[][] = new int[n][m];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                res[i][j] = Integer.MAX_VALUE;
            }
        }
        res[0][0] = 1;

        //dj
        while(!q.isEmpty()) {
            int[] curr = q.poll();
            int r = curr[0];
            int c = curr[1];
            int d = curr[2];

            for(int i = 0 ; i < 8; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] == 0) {
                    if(res[nr][nc] > d + 1) {
                        res[nr][nc] = d + 1;
                        q.add(new int[] {nr, nc, d + 1});
                    }
                }
            }
        }
        if(res[n - 1][m - 1] == Integer.MAX_VALUE) {
            return -1;
        }
        return res[n - 1][m - 1];
    }
}