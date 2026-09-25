class Solution {
    public boolean isAnagram(String s, String t) {
        int a[] = new int[26];
        if(s.length()!=t.length()){
            return false;
        }

        int n = s.length();
        for(int i=0;i<n;i++){
            int ind = (int)s.charAt(i) - (int)'a';
            int indx = (int)t.charAt(i) - (int)'a';
            a[indx]--;
            a[ind]++;
        }
        // for(int i=0;i<n;i++){
            // int ind = (int)t.charAt(i) - (int)'a';
            // a[ind]--;
        // }

        for(int i:a){
            if(i!=0){
                return false;
            }
        }
        return true;
        
    }
}