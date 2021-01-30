//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 根据题意，需要在股票收益最大的那一天退出，收益最大
//    // 收益最大不就是低价买入高价卖出吗？
//    // 思路：遍历找出最小值，然后在最小值后面找到最大值
//    // 好吧，题意卡错了，是要返回收益的结果，算了把暴力换成dp了
//    int maxProfit(vector<int>& prices) {
//        // 用两个变量，一个记录最低的价格，一个记录最大的收益
//        int minPrice = INT_MAX, maxProfit = 0;
//
//        for (int i = 0; i < prices.size(); i++) {
//            minPrice = min(minPrice, prices[i]);
//            maxProfit = max(maxProfit, prices[i] - minPrice);
//        }
//
//        return maxProfit;
//    }
//};
//
//// 测试
//int main() {
//    // 准备vector
//    vector<int> v = { 7,1,5,3,6,4 };
//
//    Solution s;
//    int r = s.maxProfit(v);
//
//    cout << "最大收益为：" << r << endl;
//
//    return 0;
//}
