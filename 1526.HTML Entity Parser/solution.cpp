class Solution {
public:
    string entityParser(string text) {
        unordered_map<string, string> rec = {
            {"&quot;", "\""},
            {"&apos;", "'"},
            {"&amp;", "&"},
            {"&gt;", ">"},
            {"&lt;", "<"},
            {"&frasl;", "/"}
        };

        string res = "";
        int n = text.size();
        int i = 0;

        while (i < n) {
            if (text[i] == '&') {
                bool flg = false;
                for (int len = 4; len <= 7; len++) {
                    if (i + len <= n) {
                        string tag = text.substr(i, len);
                        if (rec.count(tag)) {
                            res += rec[tag];
                            i += len;
                            flg = true;
                            break;
                        }
                    }
                }
                if (flg) continue;
            }
            res += text[i];
            i++;
        }

        return res;
    }
};