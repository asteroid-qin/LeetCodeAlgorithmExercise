//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断candies中每一个元素+extraCandies是否大于等于candies中的最大值，以数组的形式返回
//    // 思路：遍历一遍candies得到最大值，再遍历candies比较赋值即可
//    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//        vector<bool> res(candies.size());
//
//        int maxNum = 0;
//        for (int& i : candies) {
//            maxNum = max(maxNum, i);
//        }
//
//        for (int i = 0; i < candies.size(); i++) {
//            res[i] = (candies[i] + extraCandies >= maxNum);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}