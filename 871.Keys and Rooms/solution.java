class Solution {
    public void dfs(int ind, List<List<Integer>> rooms, boolean[] vis) {
        vis[ind] = true;
        for(int e : rooms.get(ind)) {
            if(!vis[e]) {
                dfs(e, rooms, vis);
            }
        }
        return;
    }
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        int nodes = rooms.size();
        int count = 0;
        boolean[] vis = new boolean[nodes];
        for(int i = 0; i < nodes; i++) {
            if(!vis[i]) {
                dfs(i, rooms, vis);
                count++;
            }
        }
        return count == 1;
    }
}