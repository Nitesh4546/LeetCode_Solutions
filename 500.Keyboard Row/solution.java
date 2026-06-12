class Solution {
    public String[] findWords(String[] words) {
        String r1 = "qwertyuiop";
        String r2 = "asdfghjkl";
        String r3 = "zxcvbnm";
        int arr[] = new int[26];
        for(int i = 0;i<r1.length();i++){
            arr[r1.charAt(i)-'a'] = 1;
        }
        for(int i = 0;i<r2.length();i++){
            arr[r2.charAt(i)-'a'] = 2;
        }
        for(int i = 0;i<r3.length();i++){
            arr[r3.charAt(i)-'a'] = 3;
        }

        ArrayList<String> out = new ArrayList<>();
        for(String a: words){
        //     // char c = a.charAt(0).tolower();
            char c = Character.toLowerCase(a.charAt(0));

            int r = arr[c-'a'];
            int m = a.length();
            boolean flg = true;
            for(int i = 1;i<m;i++){
                char ca = Character.toLowerCase(a.charAt(i));
                if(arr[ca-'a']!=r){
                    flg = false;
                    break;
                }
            }
            if(flg){
                out.add(a);
            }
        }
        return out.toArray(new String[0]); 
    }
}