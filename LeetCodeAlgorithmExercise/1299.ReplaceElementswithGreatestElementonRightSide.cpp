//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个数组 arr ，请你将每个元素用它右边最大的元素替换，如果是最后一个元素，用 -1 替换。
//    // 思路：自己新建一个数组，逆序赋值。dp的味道...
//    vector<int> replaceElements(vector<int>& arr) {
//        int m = arr.size();
//        vector<int> res(m);
//        res[m - 1] = -1;
//
//        for (int i = m - 2; i >= 0; i--) {
//            res[i] = max(res[i + 1], arr[i + 1]);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}