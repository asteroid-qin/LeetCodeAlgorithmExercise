//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//    // 目标：使用最小花费爬楼梯 
//    // 思路：最小意味着得使用dp。到第i阶有两种可能，一种是走两步、一种是走一步。也就是说：
//    // dp[i]=min(dp[i−1]+cost[i−1],dp[i−2]+cost[i−2])。根据这个方程实现代码即可。返回最后一个值
//    int minCostClimbingStairs(vector<int>& cost) {
//        int n = cost.size();
//        vector<int> dp(n + 1, 0);
//
//        for (int i = 2; i <= n; i++) {
//            dp[i] = min(dp[i - 2] + cost[i - 2], dp[i - 1] + cost[i - 1]);
//        }
//
//        return dp[n];
//    }
//};
//
//int main(){
//	return 0;
//}