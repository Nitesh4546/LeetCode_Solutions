class Solution {
    public boolean checkIfPangram(String sentence) {
        int a[] = new int[26];
        int n = sentence.length();

        for(int i=0;i<n;i++){
            a[(int)sentence.charAt(i)-(int)'a']++;
        }
        for(int i:a){
            if(i==0){
                return false;
            }
        }
        return true;
    }
}