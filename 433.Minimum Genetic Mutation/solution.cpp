class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string> rec(bank.begin(), bank.end());
        if(rec.find(endGene) == rec.end()) {
            return -1;
        }
        queue<pair<string, int>> q;
        q.push({startGene, 0});
        vector<char> pool = {'A', 'C', 'G', 'T'};

        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            string gene = p.first;
            int level = p.second;

            if(gene == endGene) {
                return level;
            }
            
            
            for(int i = 0; i < 8; i++) {
                char org = gene[i];
                for(int k = 0; k < 4; k++) {
                    gene[i] = pool[k];
                    if(rec.find(gene) != rec.end()) {
                        q.push({gene, level + 1});
                        rec.erase(gene);
                    }
                }
                gene[i] = org;
            }
        }
        return -1;
    }
};