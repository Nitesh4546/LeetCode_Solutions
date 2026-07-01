class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.size();
        int i = n-1;
        while(i>=0 && isvowel(s[i])){
            i--;
        }
        if(i<0){
            return "";
        }
        return s.substr(0,i+1);
    }

    bool isvowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
};