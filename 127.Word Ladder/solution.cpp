class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();
        unordered_set<string> rec(wordList.begin(), wordList.end());
        if(rec.find(endWord) == rec.end()) {
            return 0;
        }
        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        while(!q.empty()) {
            auto p = q.front();
            string word = p.first;
            int level = p.second;
            //p.second = level
            q.pop();

            if(word == endWord) {
                return level;
            }
            int nw = word.size();
            // replace every char of the word and check if it is in the rec
            for(int i = 0; i < nw; i++) {
                char org = word[i];
                for(char c = 'a'; c <= 'z'; c++) {
                    word[i] = c;
                    // found in rec then remove it and add it to q
                    if(rec.find(word) != rec.end()) {
                        q.push({word, level + 1});
                        rec.erase(word);
                    }
                }
                word[i] = org;
            }
        }
        return 0;
    }
};