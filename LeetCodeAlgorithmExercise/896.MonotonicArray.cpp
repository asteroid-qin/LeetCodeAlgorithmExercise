//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�����A�Ƿ��ǵ�������
//    // ˼·��������������¼��ǰ������һ���������С�Ĵ�����
//    // ֻҪ������һ������A.size()-1����ô���A���ǵ�����
//    // ����һ��˼·������ͨ���Ƚ�ֵ�ı任���ж���������Ƿ��ǵ����ġ�
//    bool isMonotonic(vector<int>& A) {
//        int pre = 0;    // ��¼��һ�αȽϵĽ��
//        for (int i = 0; i < A.size() - 1; i++) {
//            int now = compare(A[i], A[i + 1]);
//
//            if (now != 0) { // ��Ⱦ�û��Ҫ�Ƚ�
//                if (pre != 0 && now != pre) { // ����now�϶���Ϊ0��������Ҫ�ų���ʼֵ0
//                    return false;
//                }
//                // ��¼��0
//                pre = now;
//            }
//        }
//    }
//
//    int compare(int& a, int& b) {
//        if (a == b) {
//            return 0;
//        }
//        else if(a > b){
//            return -1;
//        }
//        else {
//            return 1;
//        }
//    }
//};
//
//int main() {
//	return 0;
//}