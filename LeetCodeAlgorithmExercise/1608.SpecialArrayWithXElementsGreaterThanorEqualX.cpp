//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：找出nums的特征值。
//    // 思路：暴力！1 <= nums.length <= 100，双for循环绝对可以解出！
//    // 但是这样时间复杂度是O(n^2),所以快速过掉后，需要想办法优化
//    // 思路是：计数！准备一个nums+1大小的数组（因为根据题意，特征值最大只能取到nums.size(),nums大小就足够了）
//    // 把nums放入数组中，值就是出现的数量
//    // 然后倒序遍历这个数组，i可以当做特征值。首先运算当前arr[i] += arr[i+1](需要把后面大的数加起来)
//    // 如果arr[i]==i就直接返回i。默认返回-1（为了防止溢出，i需要<m时再运算）
//    int specialArray(vector<int>& nums) {
//        for (int i = 1; i <= 100; i++) {
//            int count = 0;
//            for (auto& num : nums) {
//                count += (num >= i);
//            }
//            if (count = i) return i;
//        }
//
//        return -1;
//    }
//
//    int specialArrayP(vector<int>& nums) {
//        int m = nums.size();
//        vector<int> arr(m + 1);
//        for (auto& i : nums) {
//            arr[min(i,m)]++; // 为了防止溢出，取最小值
//        }
//
//        for (int i = m; i > 0; i--) {
//            if (i < m) {
//                arr[i] += arr[i + 1];
//            }
//            
//            if (arr[i] == i) {
//                return i;
//            }
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