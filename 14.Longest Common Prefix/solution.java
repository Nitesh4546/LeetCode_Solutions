class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        int n = strs.length;
        // int l = strs[0].length();
        // //
        // String pref = strs[0];
        // for(int i=1;i<n;i++){
        //     String temp = strs[i];
        //     int c = 0;
        //     for(int j=0;j<l;j++){
        //         if(temp.charAt(j)==pref.charAt(i)){
        //             c++;
        //         }else{
        //             l = c;
        //             break;
        //         }
        //         // continue;
        //     }
        // }
        // if(l<=0){
        //     return "";
        // }
        // String res = "";
        // for(int i=0;i<l;i++){
        //     res+=pref.charAt(i);
        // }
        // return res;
        StringBuilder res = new StringBuilder("");
        String top = strs[0];
        String bot = strs[n-1];
        int min = Math.min(top.length(), bot.length());
        for(int i=0;i<min;i++){
            if(top.charAt(i)!=bot.charAt(i)){
                return top.substring(0,i);
            }
            res.append(top.charAt(i));
        }
        return res.toString();
    }
}