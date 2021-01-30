//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给定一个范围在  1 ≤ a[i] ≤ n ( n = 数组大小 ) 的 整型数组，
//    // 数组中的元素一些出现了两次，另一些只出现一次。
//    // 找到所有在[1, n] 范围之间没有出现在数组中的数字。
//    // 并且时间复杂度在O(n)，空间复杂度在(1)
//    // 思路：有两种方法，一种就是排序，然后直接遍历即可，但很显然这道题考察的不是这个
//    // 而是思路二，使用一个数组来记录当数是否存在，记录完成后，数组再遍历一遍，不存在的放入结果中
//    // 但是这么做，需要额外O(n)的空间，这才是真正要考察的东西：
//    // 利用条件给的整形数组中的元素的值在1到n之间，可以将数组本身作为一表来记录是否存在
//    // 在不改变原来数组元素的情况下，可以把数组中的值作为下标，把下标处的值设为负数
//    // 遍历完成后，再遍历一遍，把不是负数的下标放入结果中
//    vector<int> findDisappearedNumbers(vector<int>& nums) {
//        vector<int> v;
//
//        for (int i = 0; i < nums.size(); i++) {
//            int index = abs(nums[i]) - 1;
//            // 注意应该设置为绝对值
//            if (nums[index] > 0) {
//                nums[index] *= -1;
//            }
//        }
//
//        for(int i = 0; i < nums.size(); i++){
//            // 如果当前值是正数，把下标+1放入结果中
//            if (nums[i] > 0) {
//                v.push_back(i + 1);
//            }
//        }
//
//
//        return v;
//    }
//};
//
//int main() {
//	return 0;
//}