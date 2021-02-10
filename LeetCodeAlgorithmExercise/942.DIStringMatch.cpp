//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：
//    // S[i] == "I"，那么 A[i] < A[i+1]
//    // 如果 S[i] == "D"，那么 A[i] > A[i + 1],每个数的取值在【0，N】，就这样返回一个数组即可
//    // 思路：贪心。。。第一时间没有想到思路的话，真的特别折磨人...
//    // 可选的值在lo-hi之间，如果当前是I，那么选最小值，如果是D，选择最大值。
//    vector<int> diStringMatch(string S) {
//        vector<int> res(S.size()+1);
//        int N = S.size(), lo = 0, hi = N;
//
//        for (int i = 0; S[i] != '\0'; i++) {
//            if (S[i] == 'I') {
//                res[i] = lo++;
//            }
//            else {
//                res[i] = hi--;
//            }
//        }
//
//        res[N] = lo;
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}