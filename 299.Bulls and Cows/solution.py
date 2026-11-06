class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        c = 0
        b = 0
        rec = {}
        # count bull
        for s, g in zip(secret, guess):
            if s == g:
                b += 1
            else:
                rec[s] = rec.get(s, 0) + 1
        
        # count cow
        for s, g in zip(secret, guess):
            if s != g:
                if rec.get(g, 0) > 0:
                    rec[g] -= 1
                    c += 1
                    
        return f"{b}A{c}B"