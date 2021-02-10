//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个按 非递减顺序 排序的整数数组 nums
//    // ，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。
//    // 思路:最简单就是遍历一遍每个元素都平方，最后排序再返回。
//    // 更优解：倒序输入最大值。因为nums是一个排序后的数组，所以数组的平方最大值肯定是头或者尾，这点非常重要！
//    // 根据上面的思路，就可以使用双指针来遍历这个数，每次选到最大值然后后移，直到指针相等。
//    vector<int> sortedSquares(vector<int>& nums) {
//        vector<int> res(nums.size());
//
//        for (int i = 0, j = nums.size() - 1, index = j; index >= 0; index--) {
//            if (nums[i] * nums[i] > nums[j] * nums[j]) {
//                res[index] = nums[i] * nums[i];
//                i++;
//            }
//            else {
//                res[index] = nums[j] * nums[j];
//                j--;
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