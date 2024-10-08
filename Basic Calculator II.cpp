class Solution {
public:
    stack<int> op;
    stack<char> opr;
   
    int precedence(char ch) {
        if (ch == '+' || ch == '-') {
            return 1;
        } else if (ch == '*' || ch == '/') {
            return 2;
        }
        return 0; // return 0 for non-operator characters
    }
   
    int doProcess() {
        int a = op.top();
        op.pop();
        int b = op.top();
        op.pop();
        char ch = opr.top();
        opr.pop();
        if (ch == '+') {
            return b + a;
        } else if (ch == '-') {
            return b - a;
        } else if (ch == '*') {
            return b * a;
        } else {
            return b / a;
        }
    }
   
    int calculate(string s) {
        for (int i = 0; i < s.size(); ++i) {
            char current = s[i];
            if (current == ' ') {
                continue;
            } else if (isdigit(current)) {
                int num = 0;
                while (isdigit(s[i]) && i < s.size()) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                op.push(num);
            } else if (current == '+' || current == '-' || current == '*' || current == '/') {
                while (!opr.empty() && precedence(opr.top()) >= precedence(current)) {
                    int result = doProcess();
                    op.push(result);
                }
                opr.push(current);
            }
        }
        while (!opr.empty()) {
            int result = doProcess();
            op.push(result);
        }
        return op.top();
    }
};
