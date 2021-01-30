//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：一个1-n的nums中，有一个数出现了两次，求这个数和这个数覆盖的数字
//    // 思路：使用map即可...一次遍历完成映射，value是出现的次数，再遍历一次映射。查出哪个值等于2，哪个值等于0
//    // 但是这样时间、空间复杂度都是O(n)，这里可以再优化一次。比如不新建arr，直接操作原数组
//    // 把每一次出现过的元素转成负数。如果一个数第二次（也就是小于0）出现那么这个数就是重复的数
//    // 再从1到nums.size()查询这个nums, 如果有一个值是正数，那么失去的数就是这个正数+1（可以根据题意得来）
//    vector<int> findErrorNums(vector<int>& nums) {
//        vector<int> arr(nums.size(), 0);
//        for (auto i : nums) {
//            arr[i - 1]++;
//        }
//
//        int repeat = 0, missing = 0;
//
//        for (int i = 1; i <= nums.size(); i++) {
//            if (!arr[i - 1]) {
//                missing = i;
//            }else if (arr[i - 1] == 2) {
//                repeat = i;
//            }
//
//            if (repeat && missing) {
//                return { repeat , missing };
//            }
//        }
//
//        return {};
//    }
//
//    vector<int> findErrorNums3(vector<int>& nums) {
//        int dup = 0, missing = 0;
//        // 找到重复值
//        for (int n : nums) {
//            missing ^= abs(n);
//            if (nums[abs(n) - 1] < 0)
//                dup = abs(n);
//            else
//                nums[abs(n) - 1] *= -1;
//        }
//        // 找到缺失的值
//        for (int i = 1; i <= nums.size(); i++) {
//            missing ^= i;
//        }
//
//        return { dup , missing ^ dup };
//    }
//
//    vector<int> findErrorNums2(vector<int>& nums) {
//        int dup = -1, missing = 1;
//
//        for (int n : nums) {
//            if (nums[abs(n) - 1] < 0)
//                dup = abs(n);
//            else
//                nums[abs(n) - 1] *= -1;
//        }
//        for (int i = 1; i < nums.size(); i++) {
//            if (nums[i] > 0)
//                missing = i + 1;
//        }
//
//        return {};
//    }
//};
//
//int main() {
//	return 0;
//}