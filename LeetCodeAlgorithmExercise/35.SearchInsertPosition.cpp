//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 这个也太简单了吧，直接在这上面写！！（出了一个小错，没考虑target值比nums中值都要大）
//    // 我特么服了！！居然还会插入重复值，并且应该在重复值的前面(脑子里突然蹦出来的很快)
//    // 一个98 一个93
//    // 下面测试一下二分查找（不知道为什么，2分法非常慢，应该是数据不够多的原因）
//    int searchInsert(vector<int>& nums, int target) {
//        // 直接一个for循环
//        for (int i = 0; i < nums.size(); i++) {
//            // 判断当前遍历的元素是否比target要大
//            if (nums[i] > target) {
//                // 如果是，那么就取出target前面的值(注意判断i为0的情况)
//                if (i == 0) {
//                    return 0;
//                }
//
//                // 判断target是否等于前面的值，如果等于，返回下标，如果不等于，返回当前下标
//                if (target == nums[i - 1]) {
//                    return i - 1;
//                }
//                else {
//                    return i;
//                }
//            }
//            else if (nums[i] == target) {
//                // 如果等于，直接返回下标
//                return i;
//            }
//        }
//
//        // 如果从左到右都没有return的话，那么target应该比所有元素都大
//        return nums.size();
//    }
//};
//
//// 懒得测了，编译器上一次过
//int main() {
//
//
//}