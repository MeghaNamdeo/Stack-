#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    void solve(stack<int> &stack, int target) {
        if (stack.empty()) {
            stack.push(target);
            return;
        }

        int topElement = stack.top();
        stack.pop();
        solve(stack, target);
        stack.push(topElement);
    }

    void insertAtBottom(stack<int> &stack, int target) {
        if (stack.empty()) {
            stack.push(target);
            return;
        }

        int topElement = stack.top();
        stack.pop();
        insertAtBottom(stack, target);
        stack.push(topElement);
    }

    void reverseStack(stack<int> &stack) {
        if (stack.empty())
            return;

        int target = stack.top();
        stack.pop();

        reverseStack(stack);
        insertAtBottom(stack, target);
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        stack<int> St;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            St.push(x);
        }

        Solution ob;
        ob.reverseStack(St);

        vector<int> res;
        while (!St.empty()) {
            res.push_back(St.top());
            St.pop();
        }

        for (int i = res.size() - 1; i >= 0; i--) {
            cout << res[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
