//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：...中文解释的很好，这里直接说出本质：把每一个重复的数做成一组，求每组个数的公因子，公因子大于等于2，
//    // 返回true，否则false
//    // 思路：根据题意，可以使用map，把每个重复的数构成一组，然后遍历这个map计算出所有组数的最大公因数。
//    // 最后返回最大公因数>=2即可
//    bool hasGroupsSizeX(vector<int>& deck) {
//        unordered_map<int, int> m;
//        for (auto& i : deck) {
//            m[i]++;
//        }
//
//        // 计算公因数
//        int div = -1;
//        for (auto it = m.begin(); it != m.end(); it++) {
//            if (div != -1) {
//                div = gcd(div, it->second);
//            }
//            else {
//                div = it->second;
//            }
//        }
//
//        return div >= 2;
//    }
//
//    int gcd(int x, int y) {
//        return (y == 0) ? x : gcd(y, x % y);
//    }
//};
//
//int main() {
//	return 0;
//}