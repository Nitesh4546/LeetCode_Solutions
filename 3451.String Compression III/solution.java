class Solution {
    public String compressedString(String word) {
        StringBuilder sb = new StringBuilder();
        int i=0;
        int n = word.length();
        while(i<n){
            char curr = word.charAt(i++);
            int count = 1;
            while(i<n && word.charAt(i)==curr && count<9){
                count++;
                i++;
            }
            sb.append(count);
            sb.append(curr);
        }
        return sb.toString();
    }
}