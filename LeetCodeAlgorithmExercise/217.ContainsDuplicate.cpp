//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给一个vector数组，判断里面是否包含重复数
//    // 思路：是否包含重复数，可以使用set，边遍历边放，如果能取出就代表有重复的
//    // 具体实现超级简单，所以可以一次过！！
//    bool containsDuplicate(vector<int>& nums) {
//        // 准备一个set容器
//        unordered_set<int> mySet;
//
//        for (int i = 0; i < nums.size(); i++) {
//            if (mySet.count(nums[i])) {
//                return true;
//            }
//            mySet.insert(nums[i]);
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}