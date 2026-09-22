class Solution {
    public int maxArea(int[] height) {
        int l = 0;
        int r = height.length-1;

        int water = 0;
        int cal = 0;;
        while(l<=r){
          cal = (r-l)*Math.min(height[l],height[r]);
          if(water<cal){
            water = cal;
          }
          if(height[l]>height[r]){
            r--;
          }else{
            l++;
          }
        }
        return water;
    }
}