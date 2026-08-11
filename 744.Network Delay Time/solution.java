class Solution {
    public int networkDelayTime(int[][] times, int n, int k) {
        ArrayList<ArrayList<int[]>> adj = new ArrayList<>();
        for(int i=0;i<=n;i++){
          adj.add(new ArrayList<>());
        }

        for(int[] time:times){
          int u = time[0];
          int v = time[1];
          int w = time[2];
          adj.get(u).add(new int[]{v,w});
        }

        PriorityQueue<int[]> pq = new PriorityQueue<>((a,b)->a[0]-b[0]);
        pq.offer(new int[]{0,k});

        int[] dist = new int[n+1];
        Arrays.fill(dist,Integer.MAX_VALUE);
        dist[k] = 0;

        int r = 0;
        int t = -1;
        while(pq.isEmpty()==false){
          int[] curr = pq.poll();
          int d = curr[0];
          int u = curr[1];

          if(d>dist[u]) continue;

          r++;
          t = Math.max(t,d);

          for(int[] nei:adj.get(u)){
            int v = nei[0];
            int wei = nei[1];
            if(dist[u] + wei < dist[v]){
              dist[v] = dist[u]+wei;
              pq.offer(new int[]{dist[v],v});
            }
          }
        }
        if(r==n){
            return t;
        }
        return -1;
    }
}