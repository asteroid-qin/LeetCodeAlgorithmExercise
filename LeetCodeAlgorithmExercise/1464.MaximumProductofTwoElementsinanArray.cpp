//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：找出两个下标，并计算(nums[i]-1)*(nums[j]-1)，要求返回最大值
//    // 思路：如果不考虑-1，问题就变成了求（nums[i] * nums[j]）的最大值
//    // 毫无意外，当i和j取两个最大值或者两个最小值时，就可以获取最大值
//    // 也就是对nums进行排序，返回返回两个最小值和两个最大值乘积的最大值即可
//    // 等等，再仔细读题，发现：1 <= nums[i] <= 10^3，所以根本没必要考虑负值的情况...
//    int maxProduct(vector<int>& nums) {
//        sort(nums.begin(), nums.end()); // 注意：这里调用api虽然爽但是时间复杂度是O(nlogn),空间复杂度是O(logn)
//        // 所以如果没事干，可以直接遍历一遍nums，计算出两个第二大值并返回（这样时间复杂度是O(n),空间是O(1)）
//
//        return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
//    }
//
//    // 直接抄的，这种求最大值和最小值这么简单的已经懒得写了..
//    int maxProduct(vector<int>& nums) {
//        int max1 = 0, max2 = 0; //max1为最大值,max2为次大值
//        for (int num : nums) {
//            if (num > max1) {  
//                max2 = max1;
//                max1 = num;
//            }
//            else if (num > max2) {
//                max2 = num;
//            }
//        }
//
//        return (max1 - 1) * (max2 - 1);
//    }
//};
//
//int main() {
//	return 0;
//}