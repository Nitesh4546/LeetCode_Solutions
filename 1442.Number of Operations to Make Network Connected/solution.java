class Solution {
    ArrayList<Boolean> vis = new ArrayList<>();
    public void dfs(int src, List<List<Integer>> adj, boolean[] vis){
        if(vis[src]==true) return;
        vis[src]=true;

        for(int x:adj.get(src)){
            dfs(x,adj,vis);
        }
    }
    public int makeConnected(int n, int[][] connections) {
        if(n-1>connections.length)return -1;
        List<List<Integer>> adj = new ArrayList<>();
        // Arrays.add(vis,false);
        boolean[] vis = new boolean[n];
        Arrays.fill(vis,false);

        for(int i=0;i<n;i++){
            // vis.add(false);
            adj.add(new ArrayList<>());
        }
        for(int[] ed:connections){
            adj.get(ed[0]).add(ed[1]);
            adj.get(ed[1]).add(ed[0]);
        }

        int count = 0;
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                dfs(i,adj,vis);
                count++;
            }
        }
        return count-1;
    }
}