//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ��:�ж�����1�ĸ���
//    // ˼·��һ��forѭ���������ǰ����1��++��������Ǿͱ��0����max
//    // ̫����..��һ������
//    int findMaxConsecutiveOnes(vector<int>& nums) {
//        int res = 0;
//        int num = 0;
//        for (auto i : nums) {
//            if (i == 1) {
//                num++;
//            }
//            else {
//                num = 0;
//            }
//
//            res = max(res, num);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}