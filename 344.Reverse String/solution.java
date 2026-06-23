class Solution {
    public void reverseString(char[] s) {
        int n = s.length;
        int h = n-1;
        int l = 0;
        while(l<h){
            // int a = (int)s[l];
            // int b = (int)s[h];
            
            // a = a+b;
            // b = a-b;
            // a = a-b;
            s[l] = (char)((int)s[l]+(int)s[h]);
            s[h] = (char)((int)s[l]-(int)s[h]);
            s[l] = (char)((int)s[l]-(int)s[h]);
            // s[l] = (char)a;
            // s[h] = (char)b;
            
            l++;
            h--;
        }
    }
}