class Solution {
    public void dfs(int src, List<List<Integer>> adj, boolean[] vis){
        if(vis[src]==true) return;
        vis[src]=true;

        for(int x:adj.get(src)){
            if(!vis[x]){
                dfs(x,adj,vis);
            }
        }
    }
    public int removeStones(int[][] stones) {
        if(stones.length==1) return 0;
        int n = stones.length;
        List<List<Integer>> adj = new ArrayList<>();
        boolean[] vis = new boolean[n];

        for(int i=0;i<stones.length;i++){
            adj.add(new ArrayList<>());
        }

        Arrays.fill(vis,false);

        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0]||stones[i][1]==stones[j][1]){//rows and columnsd
                    adj.get(i).add(j);
                    adj.get(j).add(i);
                }
            }
        }

        int count = 0;
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                dfs(i,adj,vis);
                count++;
            }
        }
        return n-count;
    }
}