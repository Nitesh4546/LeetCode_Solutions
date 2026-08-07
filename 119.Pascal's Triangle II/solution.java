class Solution {
    public List<Integer> getRow(int rowIndex) {
        int n = rowIndex+1;
        List<List<Integer>> pas = new ArrayList<>();
        for(int i = 0; i < n; i++){
            pas.add(new ArrayList<>());
        }
        pas.get(0).add(1);
        if(n > 1){
            pas.get(1).add(1);
            pas.get(1).add(1);
            // pas.set(1\,1);
            // pas.set(1,1);
        }
        if(n > 2){
            for(int i = 2; i < n; i++){
                pas.get(i).add(1);
            }


            int t = 1;
            for(int i = 2; i < n; i++){
                for(int j = 1; j <= t; j++){
                    // pas.get(i).add(1);
                    int a = pas.get(i-1).get(j-1);
                    int b = pas.get(i-1).get(j);
                    pas.get(i).add(a + b);
                }
                pas.get(i).add(1);
                t = (t < n-2)? t+1: t;
            }

        }
        return pas.get(n-1);
    }
}