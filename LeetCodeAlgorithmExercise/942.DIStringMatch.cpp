//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺
//    // S[i] == "I"����ô A[i] < A[i+1]
//    // ��� S[i] == "D"����ô A[i] > A[i + 1],ÿ������ȡֵ�ڡ�0��N��������������һ�����鼴��
//    // ˼·��̰�ġ�������һʱ��û���뵽˼·�Ļ�������ر���ĥ��...
//    // ��ѡ��ֵ��lo-hi֮�䣬�����ǰ��I����ôѡ��Сֵ�������D��ѡ�����ֵ��
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