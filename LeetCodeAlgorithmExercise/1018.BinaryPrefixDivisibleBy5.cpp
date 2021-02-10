//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给定由若干 0 和 1 组成的数组 A。我们定义 N_i：
//    // 从 A[0] 到 A[i] 的第 i 个子数组被解释为一个二进制数（从最高有效位到最低有效位）。
//    // 返回布尔值列表 answer，只有当 N_i 可以被 5 整除时，答案 answer[i] 为 true，否则为 false。
//    // 思路：可以说百分之90考察数学，因为题目告知：1 <= A.length <= 30000，这用long long也是不够的，
//    // 所以必须得对会越来越大的前缀进行优化。
//    // 也就是需要证明：每个数是否可以被5整除，可以转换成计算过程中只需要保留余数。
//    // 官方题解：有数学归纳法证明，所以这里直接写上答案.脑阔痛...
//    vector<bool> prefixesDivBy5(vector<int>& A) {
//        vector<bool> res(A.size());
//
//        for (int i = 0, num = 0; i < A.size(); i++) {
//            num = ((num << 1 )+ A[i]) % 5;
//
//            res[i] = (num == 0);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}