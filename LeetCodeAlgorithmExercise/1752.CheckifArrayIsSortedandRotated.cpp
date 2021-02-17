//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断nums是否轮序可以变成非递减数组
//    // 思路：如果最左边的值大于等于最右边的值就代表出现轮序（也就是会出现左边值大于右边的情况）
//    // 但是根据题意，即使是出现轮序，左边值大于右边的情况也只能出现一次。第二次直接就是false
//    // 默认返回true。
//    bool check(vector<int>& nums) {
//        int n = nums.size();
//        //有经过轮转
//        bool isCount = nums[0] >= nums[n - 1];
//
//        for (int i = 1; i < n; i++) {
//
//            if (nums[i] < nums[i - 1]) {
//                if (isCount) {
//                    isCount = false;
//                }
//                else {
//                    return false;
//                }
//            }
//
//        }
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}