class Solution {
    public int candy(int[] ratings) {
        // ArrayList<Integer> candy = new ArrayList<>();
        int n = ratings.length;
        int[] candy = new int[n];
        int candies = 0;
        
        for(int i=0;i<n;i++){
            // candy.add(1);
            candy[i] = 1;
        }

        // for(int i=0;i<n;i++){
        //     if(i-1>=0 && i+1<n){
        //         if(ratings[i-1]<ratings[i] && ratings[i+1]<ratings[i]){
        //             int can = Math.max(candy[i-1],candy[i+1]);
        //             candy[i] = can+1;
        //         }else if(ratings[i-1]<ratings[i]){
        //             candy[i] = candy[i-1]+1;
        //         }else if(ratings[i+1]<ratings[i]){
        //             candy[i] = candy[i+1]+1;
        //         }
        //     }else if(i==0){
        //         if(ratings[i+1]<ratings[0]){
        //             candy[0] = candy[1]+1;
        //         }
        //     }else if(i==n-1){
        //         if(ratings[i-1]<ratings[i]){
        //             candy[n-1] = candy[n-2]+1;
        //         }
        //     }
        // }

        //left -> right
        for(int i=1;i<n;i++){
            if(ratings[i-1]<ratings[i]){
                candy[i]= candy[i-1]+1;
            }
        }

        //right->left
        for(int i=n-2;i>=0;i--){
            if(ratings[i+1]<ratings[i]){
                candy[i] = Math.max(candy[i+1]+1,candy[i]);
            }
        }
        // if(ratings[0]<ratings[1]){
            // candy[1] = candy[0]+1;
        // }else{
            // candy[0] = candy[1]+0;
        // }
// 
        // if(ratings[n-1]>ratings[n-2]){
            // candy[n-1] = candy[n-2]+1;
        // }else{
            // candy[n-2] = candy[n-1]+1;
        // }
        for(int i=0;i<n;i++){
            // candies+=candy.get(i);
            candies += candy[i];
        }
        return candies;
    }
}