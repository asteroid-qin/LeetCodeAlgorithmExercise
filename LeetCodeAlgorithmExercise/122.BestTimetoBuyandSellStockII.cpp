//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 在原来的基础上再加上一个变量
//    int maxProfit(vector<int>& prices) {
//
//        // 用两个变量，一个记录最低的价格，
//        int minPrice = INT_MAX, maxProfit = 0;
//        // 准备一个变量记录和
//        int sum = 0;
//
//        for (int i = 0; i < prices.size(); i++) {
//            // 如果最大收益不为0并且当前的收益减去最少收益，那应该是把值放入sum中，重新开始
//            if (maxProfit != 0 && maxProfit > prices[i] - minPrice) {
//                sum += maxProfit;
//                minPrice = prices[i];
//                maxProfit = 0;
//            }
//
//            minPrice = min(minPrice, prices[i]);
//            maxProfit = max(maxProfit, prices[i] - minPrice);
//        }
//
//        return sum + maxProfit;
//    }
//};
//
//// 一次过，就不测试了。。
//int main() {
//    return 0;
//}