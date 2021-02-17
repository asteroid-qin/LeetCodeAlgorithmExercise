//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数数组 nums 。数组中唯一元素是那些只出现 恰好一次 的元素。
//    // 请你返回 nums 中唯一元素的 和 。
//    // 思路：遍历一遍nums把每一个元素放入map中，key是值，value是出现的次数
//    // 再遍历一遍nums，去map中查，如果当前值出现的次数等于1就加入到sum中，最后返回这个sum
//    // 最后，因为1 <= nums[i] <= 100，所以用101大小的数组也行！
//    int sumOfUnique(vector<int>& nums) {
//        int m[101] = { 0 };
//
//        for (auto& i : nums) {
//            m[i]++;
//        }
//
//        int res = 0;
//        for (int i = 1; i < 101; i++) {
//            if (m[i] == 1) {
//                res += i;
//            }
//        }
//
//        return res;
//    }
//
//};
//int main() {
//	return 0;
//}