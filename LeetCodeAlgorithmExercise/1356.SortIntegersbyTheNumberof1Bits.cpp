//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<bitset>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：根据数字二进制下 1 的数目排序
//    // 思路：调用sortAPI就完事了..先计算两个数转成二进制中1的个数，
//    // 如果相等就直接比大小。如果不相等返回左边个数小于右边（这些都太简单了，api直接过）
//    vector<int> sortByBits(vector<int>& arr) {
//        sort(arr.begin(), arr.end(), [=](int& i, int j) {
//            int x = bitset<32>(i).count();
//            int y = bitset<32>(j).count();
//            if (x == y) {
//                return i < j;
//            }
//
//            return  x < y;
//            });
//
//        return arr;
//    }
//};
//
//int main() {
//	return 0;
//}