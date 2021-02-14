//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个以行程长度编码压缩的整数列表 nums 。
//    // 思路：遍历就完事了（理解题目就非常简单）
//    vector<int> decompressRLElist(vector<int>& nums) {
//        vector<int> res;
//
//        for (int i = 0; i < nums.size(); i += 2) {
//            while (nums[i]) {
//                res.push_back(nums[i + 1]);
//                nums[i]--;
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