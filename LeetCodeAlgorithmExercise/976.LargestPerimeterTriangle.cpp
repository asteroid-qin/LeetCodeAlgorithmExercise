//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����A����Χ�������ε�����ܳ�
//    // ˼·������forѭ�����жϵ�ǰ�������ܷ񹹳������Σ�������Լ�¼�ܳ������ֵ
//    // ���Զ�A����������ΪҪ��������ܳ������ԴӺ���ǰѡ�������Σ�����ܹ��ɾ�ֱ��return
//    // Ȼ����Ϊ�����a<b<c�������ǰc���ڵ���a+b����ôǰ��������֮�Ϳ϶�����С��c������û��Ҫ�������ң�ֱ��cǰ��
//    // ����forѭ������������1��forѭ��
//    int largestPerimeter(vector<int>& A) {
//        sort(A.begin(), A.end());
//
//        for (int i = A.size() - 1; i - 2 >= 0; i--) {
//            if (A[i - 2] + A[i - 1] > A[i]) {
//                return A[i - 2] + A[i - 1] + A[i];
//            }
//        }
//
//        return 0;
//    }
//};
//
//int main() {
//	return 0;
//}