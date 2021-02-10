//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：素组A有奇数有偶数，需要把A的偶数全部放在奇数的前面
//    // 思路：双指针。i指向头，j指向尾。如果首先i++直到遇到奇数，让后j--直到遇上偶数，
//    // 如果i<j，那么交换i、j指向的值，然后继续执行，直到i < j 不成立。
//    vector<int> sortArrayByParity(vector<int>& A) {
//        int i = 0, j = A.size() - 1;
//
//        while (i < j) {
//            if (A[i] % 2 == 0) {
//                i++;
//            }
//            else if (A[j] % 2 == 1) {
//                j--;
//            }
//            else {
//                swap(A[i++], A[j--]);
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