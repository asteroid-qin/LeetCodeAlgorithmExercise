//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回一个带最下范围的vector，有三种情况：
//    // 相等：就是数字本身，头和尾差一位：可相连（可连续），头和尾差值大于1：得分开
//    // 思路：需要用一个变量记录开始截断的位置，当当前元素和下一个元素连续时，就可以继续往后遍历
//    // 直到遇到不同值。这时比较开始截断位置的值和当前的值，相等就是同一个元素，不相等就需要形成下标
//    // 最后更新阶段位置的值
//    vector<string> summaryRanges(vector<int>& nums) {
//        // 准备一个放结果的容器
//        vector<string> r;
//
//        // 记录头位置
//        int k = 0;
//
//        // 使用双指针加while循环
//        for (int i = 0, j  = 0; j < nums.size(); j++) {
//            if (j + 1 < nums.size() && nums[j + 1] == nums[j] + 1) {
//                continue;
//            }
//            if (i == j) {
//                // 如果相等，就只需要放入单个
//                r.push_back(to_string(nums[i])+"");
//            }
//            else {
//                // 不相等就需要截断
//                r.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
//            }
//            i = j + 1;
//        }
//
//        return r;
//    }
//};
//
//int main() {
//	return 0;
//}