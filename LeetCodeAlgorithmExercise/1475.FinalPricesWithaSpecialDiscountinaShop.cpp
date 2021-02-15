//#include<iostream>
//#include<vector>
//#include<stack>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：遍历prices，重新赋值，但是如果当前下标i后有第一个的值是小等于当前值的，那么需要减去这个值
//    // 思路：很明显，只要求每个数后面第一个小于当前数即可...脑海里首先想到的就是单调栈！！
//    // 需要注意的是：prices中会存在重复的元素，所以得往里面放索引
//    vector<int> finalPrices(vector<int>& prices) {
//        stack<int> st;
//
//        for (int i = 0 ; i < prices.size(); i++) {
//            while (!st.empty() && prices[st.top()] >= prices[i]) {
//                prices[st.top()] -= prices[i];
//                st.pop();
//            }
//
//            st.push(i);
//        }
//
//        return prices;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> test = {10, 1, 1, 6 };
//
//    s.finalPrices(test);
//
//
//	return 0;
//}