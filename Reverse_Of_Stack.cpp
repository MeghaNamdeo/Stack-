class Solution{
public:
    void Reverse(stack<int> &St){
        
        stack<int> S;
    
    while (!St.empty()) {
        S.push(St.top());
        St.pop();
    }
    // Now S contains the reversed elements
    // No need to return S, just update the original stack (St)
    St = S;
        
    }
};
