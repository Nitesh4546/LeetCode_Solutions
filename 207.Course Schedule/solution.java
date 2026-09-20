class Solution {
    public boolean cycle(List<List<Integer>> adj, int src, boolean[] vis,boolean[] rest){
        if(rest[src]) return true;
        if(vis[src]) return false;

        vis[src] = true;
        rest[src] = true;

        for (int v : adj.get(src)) {
            if (cycle(adj, v, vis, rest))
                return true;
        }
        rest[src] = false;
        return false;
    }

    public boolean canFinish(int numCourses, int[][] prerequisites) {
        List<List<Integer>> adj = new ArrayList<>();
        boolean vis[] = new boolean[numCourses];
        boolean rest[] = new boolean[numCourses];

        Arrays.fill(vis,false);
        Arrays.fill(rest,false);

        for(int i=0;i<numCourses;i++){
            adj.add(new ArrayList<>());
        }

        for(int ed[]:prerequisites){
            int a = ed[0];
            int b = ed[1];
            adj.get(b).add(a);
        }

        for (int i = 0; i < numCourses; i++) {
            if (!vis[i] && cycle(adj, i, vis, rest)) {
                return false; 
            }
        }
        return true;

    }
}