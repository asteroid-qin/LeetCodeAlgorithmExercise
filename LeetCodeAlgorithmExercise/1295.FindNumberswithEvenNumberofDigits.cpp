//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数数组 nums，请你返回其中位数为 偶数 的数字的个数。
//    // 思路：遍历就完事了。1 <= nums[i] <= 10^5
//    // 关键是如何根据一个数快速判断位数为 偶数。
//    // 很明显<10为奇数,<100偶数，<1000奇数，<10000偶数，<100000奇数
//    // 直接写一个函数即可
//    int findNumbers(vector<int>& nums) {
//        int sum = 0;
//
//        for (auto& i : nums) {
//            if (judgeEven(i)) {
//                sum++;
//            }
//        }
//        
//        return sum;
//    }
//
//    bool judgeEven(int n) {
//        if (n < 10 || (n >= 100 && n < 1000) || (n >= 10000 && n < 100000)) {
//            return false;
//        }
//
//        return true;
//    }
//
//};
//int main() {
//	return 0;
//}