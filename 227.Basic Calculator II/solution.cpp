class Solution {
public:
    int prec(char op) {
        if (op == '/' || op == '*')
            return 2;
        if (op == '+' || op == '-')
            return 1;
        return 0;
    }

    int calculate(string s) {
        stack<int> values;
        stack<char> ops;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ')
                continue;

            if (s[i] == '(') {
                ops.push(s[i]);
            } 
            else if (isdigit(s[i])) {
                int val = 0;
                while (i < s.length() && isdigit(s[i])) {
                    val = (val * 10) + (s[i] - '0');
                    i++;
                }
                values.push(val);
                i--;
            } 
            // else if (s[i] == ')') {
            //     while (!ops.empty() && ops.top() != '(') {
            //         int val2 = values.top(); values.pop();
            //         int val1 = values.top(); values.pop();
            //         char op = ops.top(); ops.pop();
                    
            //         if (op == '+') values.push(val1 + val2);
            //         else if (op == '*') values.push(val1 * val2); 
            //         else if (op == '-') values.push(val1 - val2);
            //         else if (op == '/') values.push(val2 == 0 ? 0 : val1 / val2);
            //     }
            //     if (!ops.empty())
            //         ops.pop();
            // } 
            else { 
                while (!ops.empty() && prec(ops.top()) >= prec(s[i])) {
                    int val2 = values.top(); values.pop();
                    int val1 = values.top(); values.pop();
                    char op = ops.top(); ops.pop();
                    
                    if (op == '+') values.push(val1 + val2);
                    else if (op == '*') values.push(val1 * val2); 
                    else if (op == '-') values.push(val1 - val2);
                    else if (op == '/') values.push(val2 == 0 ? 0 : val1 / val2);
                }
                ops.push(s[i]); 
            }
        }

        while (!ops.empty()) {
            int val2 = values.top(); values.pop();
            int val1 = values.top(); values.pop();
            char op = ops.top(); ops.pop();
            
            if (op == '+') values.push(val1 + val2);
            else if (op == '*') values.push(val1 * val2);
            else if (op == '-') values.push(val1 - val2);
            else if (op == '/') values.push(val2 == 0 ? 0 : val1 / val2);
        }

        return values.empty() ? 0 : values.top();
    }
};