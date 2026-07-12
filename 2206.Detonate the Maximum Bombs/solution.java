class Solution {
    public boolean inrange(int[] start, int[] check) {
        long dx = (long) start[0] - check[0];
        long dy = (long) start[1] - check[1];
        long radius = start[2];        
        return (dx * dx + dy * dy) <= (radius * radius);
    }
    public int bfs(int start, ArrayList<ArrayList<Integer>> adj, int n) {
        Queue<Integer> q = new LinkedList<>();
        boolean[] vis = new boolean[n];

        q.offer(start);
        int count = 0;
        vis[start] = true;
        while(!q.isEmpty()) {
            int curr = q.poll();
            count++;
            for(int i: adj.get(curr)) {
                if(!vis[i]) {
                    vis[i] = true;
                    q.offer(i);
                }
            }

        }
        return count;
    }
    
    
    public int maximumDetonation(int[][] bombs) {
        int n = bombs.length;
        ArrayList<ArrayList<Integer>> rec = new ArrayList<>();
        
        for(int i = 0; i < n; i++) {
            rec.add(new ArrayList<>());
        }

        //graphs
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j) {
                    if(inrange(bombs[i], bombs[j])) {
                        rec.get(i).add(j);
                    }
                }
            }
        }
        int max_ = 0;
        for(int i = 0; i < n; i++) {
            max_ = Math.max(max_, bfs(i, rec, n)); 
        } 

        return max_;
    }
}