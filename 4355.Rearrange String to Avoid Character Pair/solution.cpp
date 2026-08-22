class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string mid = "";         
        string fir = "";
        string las = "";
        for(char c: s) {             
            if(c == y) {                 
                fir += y;
            }else if(c == x){                 
                las += x;
            }else {
                mid += c;
            }
        }         
        return fir + mid + las;
    }
};