//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个 m * n 的矩阵，矩阵中的数字 各不相同 。请你按 任意 顺序返回矩阵中的所有幸运数。
//    // 思路：遍历matrix即可。根据矩阵中的所有元素都是不同的。先遍历每一行的最小值
//    // 找到并放入set中
//    // 再遍历找到每一列的最大值，拿到最大值如果在set中可以找到就放入res中，否则不处理
//    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
//        vector<int> res;
//        unordered_set<int> ms;
//
//        for (auto& v : matrix) { // 每一行的最小值
//            int num = INT_MAX;
//            for (int& i : v) {
//                num = min(num, i);
//            }
//            ms.insert(num);
//        }
//
//        for (int i = 0; i < matrix[0].size(); i++) { // 每一列的最大值
//            int num = INT_MIN;
//            for (int j = 0; j < matrix.size(); j++) {
//                num = max(num, matrix[j][i]);
//            }
//
//            if (ms.count(num)) {
//                res.push_back(num);
//            }
//        }
//
//        return res;
//    }
//
//};
//int main() {
//	return 0;
//}