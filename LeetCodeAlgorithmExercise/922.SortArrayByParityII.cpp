//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���������������±��ϣ�ż������ż���±���
//    // ˼·��˫ָ�룬һ��ָ��ż���±꣬һ��ָ�������±ꡣָ��ÿ��+=2��ֱ��������ƥ�������Ȼ�󽻻�˫ָ��ָ���ֵ
//    // ���ֱ����һ��ָ��ָ��ͷ��
//    vector<int> sortArrayByParityII(vector<int>& A) {
//        int i = 0, j = 1, m = A.size();
//
//        while (i < m && j < m) { 
//            if (A[i] % 2 == 0) {
//                i += 2;
//            }
//            else if (A[j] % 2 == 1) {
//                j += 2;
//            }
//            else {
//                swap(A[i], A[j]);
//                i += 2;
//                j += 2;
//            }
//        }
//
//        return A;
//    }
//};
//
//int main() {
//	return 0;
//}