//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：nums中有2n个元素，要求原本以n为分界线，进行交错排列
//    // 思路：准备2n大小的res，遍历nums，把当前i和i+n元素按照顺序放入res中。遍历结束返回res
//    vector<int> shuffle(vector<int>& nums, int n) {
//        vector<int> res(2 * n);
//
//        for (int i = 0; i < n; i++) {
//            res[i * 2] = nums[i];
//            res[i * 2 + 1] = nums[i + n];
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}