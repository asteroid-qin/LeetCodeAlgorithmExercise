//#include<iostream>
//#include<vector>
//#include<numeric>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断一个arr是否能够分出三等分。
//    // 思路：和之前做过的判断能否被分出二等分类型，首先求出A的和.（注意得判断A能否被3整除，这是隐含条件）
//    // 然后遍历一次A,需要找到第一次num = A / 3，找到了就break，需要处理此时i已经到底的情况
//    // 然后再遍历一次A，需要找到第一次num = A * 2 / 3的位置。注意此时i的判断条件，一定要与尾隔一个位置
//    bool canThreePartsEqualSum(vector<int>& A) {
//        int sum = accumulate(A.begin(), A.end(), 0);
//
//        int i = 0, num = 0, n = A.size();
//
//        if (sum % 3 != 0)
//            return false;
//
//        while (i < n) {
//            num += A[i++];
//            if (num == sum / 3) {
//                break;
//            }
//        }
//
//        if (i == n) {
//            return false;
//        }
//
//        while (i + 1 < n) { // 注意！因为要分出三等分，所以一定要留一个位置
//            num += A[i++];
//            if (num == 2 * sum / 3) {
//                return true;
//            }
//        }
//        
//
//        return false;
//    }
//};
//
//int main() {
//    vector<int> test = { 1,2,3,4 };
//    Solution s;
//
//    s.canThreePartsEqualSum(test);
//
//	return 0;
//}