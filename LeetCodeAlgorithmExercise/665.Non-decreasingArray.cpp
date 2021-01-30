//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断如果只改变一个数，是否能够把这个数组变成非递减数组
//    // 思路：从第二个索引位置开始讨论。
//    // 如果当前左边的值小于等于右边的值，如果当前值大于右边的值就记录已修改一次，并设置当前值为左值
//    // 分类讨论快把我人讨论傻了...
//    bool checkPossibility(vector<int>& nums) {
//        int flag = 0;
//
//        // 从索引为1，长度为3开始遍历。长度为2没必要讨论
//        for (int i = 1; i + 1 < nums.size(); i++) {
//            if (nums[i - 1] < nums[i + 1]) {
//                if ((nums[i] > nums[i + 1]) || (nums[i] < nums[i - 1])) {
//                    nums[i] = nums[i - 1];
//                    flag++;
//                }
//            }
//            else if (nums[i - 1] == nums[i + 1]) {
//                if (nums[i] != nums[i - 1]) {
//                    nums[i] = nums[i - 1];
//                    flag++;
//                }
//            }
//            else{  // 如果左值大于右值,需要判断当前值是否小于右值 9 2 5
//                if (nums[i] <= nums[i + 1]) {
//                    flag++;
//                }
//                else if (nums[i] >= nums[i - 1]) {  // 如果当前值大于或者等于左值
//                    nums[i + 1] = nums[i];
//                    flag++;
//                }
//                else {
//                    return false;
//                }
//            }
//
//            if (flag == 2) {
//                return false;
//            }
//        }
//        
//
//        return true;
//    }
//
//    // 上面写的太丑陋了..再做一些优化
//    bool checkPossibility(vector<int>& nums) {
//        int count = 0, pre = INT_MIN;
//
//        for (int i = 0; i + 1 < nums.size() && count != 2; i++) {
//            if (nums[i] > nums[i + 1]) {
//                if (pre > nums[i + 1]) {
//                    nums[i + 1] = nums[i];
//                }
//                count++;
//            }
//            pre = nums[i];// 4 2
//        }
//
//        return count != 2;
//    }
//};
//
//int main() {
//	return 0;
//}