//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：太长了...
//    // 思路：很简单，遍历一遍trust把1-N每个数进行标记（a作为下标++）,再遍历一次N，找出唯一值等于0的下标。
//    // 如果没有找到，根据题意,输出-1.
//    int findJudge(int N, vector<vector<int>>& trust) {
//        vector<int> bucket(N, 0);
//
//        for (auto v : trust) {
//            bucket[v[0] - 1]++;
//        }
//
//        int res = -1;
//
//        for (int i = 0; i < N; i++) {
//            if (bucket[i] == 0) {
//                if (res != -1) {
//                    return -1;
//                }
//
//                res = i + 1;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}