//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺̫����...
//    // ˼·���ܼ򵥣�����һ��trust��1-Nÿ�������б�ǣ�a��Ϊ�±�++��,�ٱ���һ��N���ҳ�Ψһֵ����0���±ꡣ
//    // ���û���ҵ�����������,���-1.
//    int findJudge(int N, vector<vector<int>>& trust) {
//        vector<int> bucket(N, 0);
//
//        for (auto v : trust) {
//            bucket[v[0] - 1]++;
//        }
//
//        int res = -1;
//
//        for (int i = 0; i < N; i++) {
//            if (bucket[i] == 0) {
//                if (res != -1) {
//                    return -1;
//                }
//
//                res = i + 1;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}