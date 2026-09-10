class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, j = 0;
        while (i < n) {
            char temp = chars[i++];
            int count = 1;
            while (i < n && chars[i] == temp) {
                i++;
                count++;
            }
            chars[j++] = temp;
            if (count > 1) {
                string nu = to_string(count);
                for (char c : nu) {
                    chars[j++] = c;
                }
            }
        }
        return j;
    }
};