class Solution {
public:
    void solve(stack<int>& s, int target) {
        if (s.empty()) {
            s.push(target);
            return;
        }

        int topElement = s.top();
        s.pop();
        solve(s, target);
        s.push(topElement);
    }

    stack<int> insertAtBottom(stack<int> s, int X) {
        solve(s, X);
        return s;
    }
};
