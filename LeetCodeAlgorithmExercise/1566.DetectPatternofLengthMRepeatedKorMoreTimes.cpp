//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：记录arr中重复字符的长度，如果等于m就k--，当k==0时返回true，默认false
//    // 思路：遍历就完事了。
//    bool containsPattern(vector<int>& arr, int m, int k) {
//        int n = arr.size();
//        if (n < m * k) return false;
//        int i, j;
//        for (i = 0; i <= n - m * k; ++i) {
//            for (j = i + m; j < i + m * k; ++j) {
//                if (arr[j] != arr[j - m]) break;
//            }
//
//            if (j == i + m * k) return true;
//        }
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}