//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回A中能围成三角形的最大周长
//    // 思路：三层for循环，判断当前三个数能否构成三角形，如果可以记录周长的最大值
//    // 可以对A进行排序，因为要的是最大周长。所以从后往前选择三角形，如果能构成就直接return
//    // 然后因为排序后a<b<c，如果当前c大于等于a+b，那么前面两个数之和肯定更会小于c，所以没必要继续查找，直接c前移
//    // 三层for循环经过排序变成1层for循环
//    int largestPerimeter(vector<int>& A) {
//        sort(A.begin(), A.end());
//
//        for (int i = A.size() - 1; i - 2 >= 0; i--) {
//            if (A[i - 2] + A[i - 1] > A[i]) {
//                return A[i - 2] + A[i - 1] + A[i];
//            }
//        }
//
//        return 0;
//    }
//};
//
//int main() {
//	return 0;
//}