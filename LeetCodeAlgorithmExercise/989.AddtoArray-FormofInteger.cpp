//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把K里面的数每一位每一位地加入到A中
//    // 思路：准备一个数组，用i从后往前遍历A，如果i>=0，需要把当前值直接付给A，否则往后追加，最后反转整个数组得到结果
//    // 上面最核心的一步！如何计算出当前位数，如果A和K当前位之和大于9，那么进位该如何保存？
//    // 这里可以通过把A的当前数加给K的方法来进位（或者自己再取一个变量也行），这样如果两个位数相加大于9，那么K自己会进位
//    // 后面K/=10，进位的值也会保留下来。
//    vector<int> addToArrayForm(vector<int>& A, int K) {
//        int m = A.size();
//        vector<int> res(m);
//
//        for (int i = m - 1; i >= 0 || K != 0; K /= 10) {
//            if (i >= 0) {
//                K += A[i];  // 灵魂一步
//
//                res[m - i + 1] = K % 10;
//                i--;
//            }
//            else {
//                res.push_back(K % 10);
//            }
//
//        }
//
//        reverse(res.begin(), res.end());
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}