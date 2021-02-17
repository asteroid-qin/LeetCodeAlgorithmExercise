//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：找到gain前面和的最大值
//    // 思路：遍历gain，并累加求和。用一个变量记录这个过程中最大值
//    int largestAltitude(vector<int>& gain) {
//        int res = 0, sum = 0;
//        for (int& i : gain) {
//            sum += i;
//            res = max(res, sum);
//        }
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}