//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个非空数组，返回此数组中 第三大的数 。如果不存在，则返回数组中最大的数。
//    // 思路：直接排序，然后判断倒数第三数的下标是否小于0，如果是就返回倒数第一个数的下标，不是就直接返回这个下标
//    // 注意！！小心重复数据！
//    // 或者使用动态规划！用三个变量分别记录第一到第三大的数，只需要遍历一遍
//    // 大概思路是：更新最大值时，把要舍弃的值给记录第二大值的变量
//    int thirdMax(vector<int>& nums) {
//        long fMax = LONG_MIN, sMax = LONG_MIN, tMax = LONG_MIN;
//
//        for (auto n : nums) {
//            if (n > fMax) {
//                tMax = sMax;
//                sMax = fMax;
//                fMax = n;
//            }
//            else if (n == fMax) {
//                continue;
//            }
//            else if (n > sMax) {
//                tMax = sMax;
//                sMax = n;
//            }
//            else if (n == sMax) {
//                continue;
//            }
//            else if (n > tMax) {
//                tMax = n;
//            }
//        }
//
//        return tMax == LONG_MIN ? fMax : tMax;
//
//    }
//};
//
//int main() {
//    vector<int> n = {3,2,1};
//    Solution s;
//
//    cout << s.thirdMax(n) << endl;
//
//	return 0;
//}