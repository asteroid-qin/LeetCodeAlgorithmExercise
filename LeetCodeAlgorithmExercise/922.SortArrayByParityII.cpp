//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把奇数放在奇数下标上，偶数放在偶数下标上
//    // 思路：双指针，一个指向偶数下标，一个指向奇数下标。指针每次+=2，直到遇到不匹配的数。然后交换双指针指向的值
//    // 如此直到有一个指针指向头部
//    vector<int> sortArrayByParityII(vector<int>& A) {
//        int i = 0, j = 1, m = A.size();
//
//        while (i < m && j < m) { 
//            if (A[i] % 2 == 0) {
//                i += 2;
//            }
//            else if (A[j] % 2 == 1) {
//                j += 2;
//            }
//            else {
//                swap(A[i], A[j]);
//                i += 2;
//                j += 2;
//            }
//        }
//
//        return A;
//    }
//};
//
//int main() {
//	return 0;
//}