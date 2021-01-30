//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：nums中包含n-1个 0到n范围内不重复的数，求出那个在范围内不存在的数（注意！这里n其实是num的长度）
//    // 可以看到提示说：可以尝试达到O(1)空间复杂度，O(n)时间复杂度，也就是说，这里不应该使用数据结构
//    // 思路：看了一下官方答案，有非常多种，做法，感觉最妙的当属异或！数学法变加边减也行！
//    int missingNumber(vector<int>& nums) {
//        // 这里使用异或
//        int missing = nums.size();
//        for (int i = 0; i < nums.size(); i++) {
//            missing ^= i ^ nums[i];
//        }
//
//        // 一次遍历就可以得到不存在的数！！
//        return missing;
//    }
//};
//
//int main() {
//	return 0;
//}