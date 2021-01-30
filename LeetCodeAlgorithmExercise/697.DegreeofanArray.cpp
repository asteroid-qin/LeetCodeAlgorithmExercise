//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：求数组的度，然后根据度找最短连续子数组
//    // 思路：先求这个数组的度，度可能出现多个，需要用数组记录。
//    // 因为最短连续子数组等于这个数最后一次出现的索引-第一次出现的索引+1，所以得用map来记住第一次和第二次出现的
//    // 索引
//    int findShortestSubArray(vector<int>& nums) {
//        int curMap[50000] = {0};
//        int left[50000] = {0};
//        int right[50000] = {0};
//        int count = 0;
//        vector<int> v;
//        for (int i = 0; i < nums.size(); i++) {
//            int x = nums[i];
//
//            curMap[x]++;
//
//            if (curMap[x] == 1)left[x] = i;
//            right[x] = i;
//
//            if (curMap[x] > count) {
//                count = curMap[x];
//                v.clear();
//                v.push_back(x);
//            }
//            else if (curMap[x] == count) {
//                v.push_back(x);
//            }
//        }
//        // 计算每个度的最小子数组长
//        int res = INT_MAX;
//        for (auto i : v) {
//            res = min(res, right[i] -  left[i] + 1);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}