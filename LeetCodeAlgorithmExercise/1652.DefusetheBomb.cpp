//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：根据k值的不同对code进行处理并返回
//    // 思路：三个if判断即可
//    vector<int> decrypt(vector<int>& code, int k) {
//        int m = code.size();
//
//        if (k > 0) {
//            vector<int> res(m);
//
//            int sum = 0;
//            for (int i = 0; i < k; i++) {
//                sum += code[i];
//            }
//
//            for (int i = 0; i < m; i++) {
//                sum = sum - code[i] + code[(i + k) % m];
//                res[i] = sum;
//            }
//
//            return res;
//        }
//        else if (k < 0) {
//            vector<int> res(m);
//
//            int sum = 0;
//            for (int i = m + k; i < m; i++) {
//                sum += code[i];
//            }
//
//            for (int i = 0; i < m; i++) {
//                res[i] = sum;
//                sum = sum + code[i] - code[(i + m + k) % m];
//            }
//
//            return res;
//        }
//        else {
//            for (int i = 0; i < m; i++) {
//                code[i] = 0;
//            }
//        }
//
//        return code;
//    }
//};
//
//int main() {
//	return 0;
//}