class Solution {
    public int[][] merge(int[][] intervals){
        if(intervals.length==0){
            return new int[0][0];
        }
        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));

        List<int[]> merged = new ArrayList<>();
        merged.add(intervals[0]);

        for(int i=1;i<intervals.length;i++){
            int[] curr = intervals[i];
            int[] last = merged.get(merged.size()-1);

            if(curr[0]<=last[1]){
                last[1] = Math.max(last[1],curr[1]);
            }else{
                merged.add(curr);
            }
        }
        return merged.toArray(new int[merged.size()][]);
    }
    public int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> res = new ArrayList<>();
        boolean ins = false;
        for(int[] interval:intervals){
            if(!ins && newInterval[0]<interval[0]){
                res.add(newInterval);
                ins = true;
            }
            res.add(interval);
        }
        if(!ins){
            res.add(newInterval);
        }
        int[][] inter = res.toArray(new int[res.size()][]);
        return merge(inter);
    }
}