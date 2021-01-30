//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：太长了..懒得概括了
//    // 思路：用两个变量记录宽和高的最小值，最后返回宽*高即可。注意要小心ops为空的特别情况！！(这里直接使用m、s，就不用考虑空的情况了)
//    // 根据题目可以轻松推出这个结果
//    int maxCount(int m, int n, vector<vector<int>>& ops) {
//        for (auto v : ops) {
//            m = min(m, v[0]);
//            n = min(n, v[1]);
//        }
//
//        return m * n;
//    }
//};
//
//int main() {
//	return 0;
//}