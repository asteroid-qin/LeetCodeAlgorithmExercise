//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回不是按字典序升序排列的列的个数
//    // 思路：把strs看做二维数组，每列每列的遍历，如果当前列不是升序就++
//    int minDeletionSize(vector<string>& strs) {
//        int count = 0;
//
//        for (int j = 0; j < strs[0].size(); j++) {
//            for (int i = 0; i + 1 < strs.size(); i++) {
//                if (strs[i][j] > strs[i + 1][j]) {
//                    count++;
//                    break;
//                }
//            }
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}
