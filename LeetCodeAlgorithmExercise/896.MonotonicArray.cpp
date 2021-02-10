//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断数组A是否是单调数列
//    // 思路：用两个变量记录当前数比下一个数大或者小的次数，
//    // 只要其中有一个等于A.size()-1，那么这个A就是单调的
//    // 还有一种思路：就是通过比较值的变换来判断这个数组是否是单调的。
//    bool isMonotonic(vector<int>& A) {
//        int pre = 0;    // 记录上一次比较的结果
//        for (int i = 0; i < A.size() - 1; i++) {
//            int now = compare(A[i], A[i + 1]);
//
//            if (now != 0) { // 相等就没必要比较
//                if (pre != 0 && now != pre) { // 首先now肯定不为0，这里需要排除初始值0
//                    return false;
//                }
//                // 记录非0
//                pre = now;
//            }
//        }
//    }
//
//    int compare(int& a, int& b) {
//        if (a == b) {
//            return 0;
//        }
//        else if(a > b){
//            return -1;
//        }
//        else {
//            return 1;
//        }
//    }
//};
//
//int main() {
//	return 0;
//}