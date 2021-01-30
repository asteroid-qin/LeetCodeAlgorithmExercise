//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：重塑矩阵
//    // 思路：先判断r*c是不是等于nums.size()*nums[0].size()，如果是就代表可以重塑，不然返回本身
//    // 重塑时
//    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
//        // 先判断输入的r、c是否可以重塑矩阵
//        if (nums.size() * nums[0].size() != r * c) {
//            return nums;
//        }
//        // 创建一个新的矩阵
//        vector<vector<int>> res(r,vector<int>(c));
//
//        // 遍历nums，把里面的值放入c中
//        int rIndex = 0, cIndex = 0;
//        for (int i = 0; i < nums.size(); i++) {
//            for (int j = 0; j < nums[0].size(); j++) {
//                res[rIndex][cIndex++] = nums[i][j];
//                // 如果列满了就需要行++
//                if (cIndex % c == 0) {
//                    rIndex++;
//                    // 列重新从0开始
//                    cIndex = 0;
//                }
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//    vector<vector<int>> num = {{ 1,2 }, { 3,4 }};
//
//    Solution s;
//    vector<vector<int>> res =  s.matrixReshape(num,1,4);
//
//    for (auto v : res) {
//        for (auto i : v) {
//            cout << i << " ";
//        }
//        cout << endl;
//    }
//
//
//	return 0;
//}