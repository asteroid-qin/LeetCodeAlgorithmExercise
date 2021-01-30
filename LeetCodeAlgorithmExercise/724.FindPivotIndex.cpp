//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：找出一个数组的下标，要求下标左边的数之和等于右边
//    // 思路：这里使用双指针过于麻烦，所以换一种思路：先求nums的和，然后遍历nums，并leftSum记录左边的和
//    // 只要leftSum == num - nums[i] - leftSum，那么这个i就是中间坐标，否则返回-1
//    int pivotIndex(vector<int>& nums) {
//        int sum = 0;
//        for (auto i : nums) {
//            sum += i;
//        }
//
//        int leftSum = 0;
//        for (int i = 0; i < nums.size(); i++) {
//            if (leftSum == sum - leftSum - nums[i]) {
//                return i;
//            }
//            leftSum += nums[i];
//        }
//
//
//        return -1;
//    }
//};
//
//int main() {
//	return 0;
//}