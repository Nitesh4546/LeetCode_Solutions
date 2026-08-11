class Solution {
    public int dfs(int src, ArrayList<ArrayList<int[]>> adj, boolean[] vis, int res) {
        vis[src] = true;
        
        for(int i = 0; i < adj.get(src).size(); i++){
            int[] curr = adj.get(src).get(i);
            
            res = Math.min(res, curr[1]);
            
            if(!vis[curr[0]]){
                res = Math.min(res, dfs(curr[0], adj, vis, res));
            }
        }
        return res;
    }
    public int minScore(int n, int[][] roads) {
        ArrayList<ArrayList<int[]>> adj = new ArrayList<>();
        for(int i = 0; i <= n; i++) {
            adj.add(new ArrayList<>());
        }

        for(int i = 0; i < roads.length; i++) {
            int u = roads[i][0];
            int v = roads[i][1];
            int w = roads[i][2];
            adj.get(u).add(new int[] {v, w});
            adj.get(v).add(new int[] {u, w});
        }

        boolean vis[] = new boolean[n + 1];
        return dfs(1, adj, vis, Integer.MAX_VALUE);
    }
}