//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：获取生成数组中的最大值
//    // 思路：模拟
//    int getMaximumGenerated(int n) {
//        if (n == 0) {
//            return 0;
//        }
//
//        int res = 1;
//
//        vector<int> ans(n + 1);
//        ans[1] = 1;
//
//        for (int i = 1; i * 2 <= n; i++) {
//            ans[2 * i] = ans[i];
//            if (i * 2 + 1 <= n) {
//                ans[2 * i + 1] = ans[i] + ans[i + 1];
//                res = max(res, ans[2 * i + 1]);
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}