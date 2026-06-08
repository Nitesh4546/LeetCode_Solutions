class Solution {
    public int bagOfTokensScore(int[] tokens, int power) {
        Arrays.sort(tokens);
        int j = tokens.length-1;
        int i = 0;
        int score = 0;
        int max = 0;
        while (i <= j) {
            if (power >= tokens[i]) {
                power -= tokens[i];
                score++;
                i++;
                max = Math.max(max, score); 
            } 
            else if (score >= 1 && i < j) { 
                power += tokens[j];
                score--;
                j--;
            } 
            else {
                break;
            }
        }
        return max;
    }
}