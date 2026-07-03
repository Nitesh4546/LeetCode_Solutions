class Solution {
    public List<Integer> findSmallestSetOfVertices(int n, List<List<Integer>> edges) {

        ArrayList<Integer> res = new ArrayList<>();
        boolean vis[] = new boolean[n];
        int z = edges.size();
        for(int i = 0; i < z; i++) {
            vis[edges.get(i).get(1)] = true;
        }

        for(int i = 0; i < n; i++) {
            if(!vis[i]){
                res.add(i);
            }
        }
        return res;
    }
}