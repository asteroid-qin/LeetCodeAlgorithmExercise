//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���ز��ǰ��ֵ����������е��еĸ���
//    // ˼·����strs������ά���飬ÿ��ÿ�еı����������ǰ�в��������++
//    int minDeletionSize(vector<string>& strs) {
//        int count = 0;
//
//        for (int j = 0; j < strs[0].size(); j++) {
//            for (int i = 0; i + 1 < strs.size(); i++) {
//                if (strs[i][j] > strs[i + 1][j]) {
//                    count++;
//                    break;
//                }
//            }
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}
