class Solution {
    public int compress(char[] chars) {
        // StringBuilder sb = new StringBuilder("");
        // int i = 0;
        // int j = i+1;
        // int n = chars.length;
        // int count = 0;

        // while(j<n){
        //     if(chars[i]==chars[j]){
        //         count++;
        //     }else{
        //         sb+=Character.toString(chars[i]);
        //         if(count==1){
        //             // +count;
        //             continue;
        //         }else if(count<=9){
        //             sb+=Integer.toString(count);
        //         }else{
        //             sb+=Integer.toString(9);
        //             count-=9;
        //             while(count>9){
                        
        //                 sb+=Character.toString(chars[i])+count;
        //                 count -=9;
        //             }
        //         }
        //     }
        // }
        // return sb.length();
        int i=0,j=0;
        int n = chars.length;
        while(i<n){
            char curr = chars[i++];
            int count = 1;
            while(i<n && chars[i]==curr){
                count++;
                i++;
            }
            chars[j++]=curr;
            if(count>1){
                for(char ch:Integer.toString(count).toCharArray()){
                    chars[j++] = ch;
                }
            }
        }
        return j;
    }
}