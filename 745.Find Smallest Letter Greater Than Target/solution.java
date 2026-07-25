class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int n = letters.length;
        int l = 0;
        int r = n-1;

        while(l<=r){
          int mid = l+(r-l)/2;
          if(letters[mid]>target){
            r = mid - 1;
          }else{
            l = mid + 1;
          }
        }
        return letters[l%n];
        

    }
}