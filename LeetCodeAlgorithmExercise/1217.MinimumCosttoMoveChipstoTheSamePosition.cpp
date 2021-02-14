//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把砝码移动同一个位置
//    // 思路：找规律，
//    // 1，直接返回0
//    // 2, 如果两个值不相同，判断当前两个数是否为偶数，如果都为偶数就是0，否则就是1
//    // 已经找到了，从左往右遍历，记录奇数的数量。然后返回奇数和偶数数量中的最小值
//    int minCostToMoveChips(vector<int>& position) {
//        int eve = 0;
//        for (auto& i : position) {
//            if (i % 2 == 0) {
//                eve++;
//            }
//        }
//
//        int odd = position.size() - eve;
//
//        return min(eve, odd);
//    }
//};
//
//int main() {
//	return 0;
//}