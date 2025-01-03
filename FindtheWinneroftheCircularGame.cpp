class Solution {
public:
    int solve(int n, int k){
        if (n == 1){
            return 0;
        }
        return (solve(n-1,k) + k) % n;
    }
    int findTheWinner(int n, int k) {
        return solve(n,k) + 1;
        // queue<int> ans;
        // for(int i=1; i <= n; i++){
        //     ans.push(i);
        // }
        // while(ans.size() > 1){
        //     for(int i = 1; i < k; i++){
        //         ans.push(ans.front());
        //         ans.pop();
        //     }
        //     ans.pop();
        // }
        // return ans.front();
    }
};
