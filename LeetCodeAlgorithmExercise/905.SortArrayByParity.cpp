//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����A��������ż������Ҫ��A��ż��ȫ������������ǰ��
//    // ˼·��˫ָ�롣iָ��ͷ��jָ��β���������i++ֱ�������������ú�j--ֱ������ż����
//    // ���i<j����ô����i��jָ���ֵ��Ȼ�����ִ�У�ֱ��i < j ��������
//    vector<int> sortArrayByParity(vector<int>& A) {
//        int i = 0, j = A.size() - 1;
//
//        while (i < j) {
//            if (A[i] % 2 == 0) {
//                i++;
//            }
//            else if (A[j] % 2 == 1) {
//                j--;
//            }
//            else {
//                swap(A[i++], A[j--]);
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