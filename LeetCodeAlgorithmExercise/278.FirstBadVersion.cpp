//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ�������ҵ�һ����ȷ�汾��Ĵ���汾
//    // ˼·��ֱ�Ӵ�ͷ��ʼ�����������ǰ�Ǵ���汾��ֱ�ӷ��������(���������ǲ��еģ���ĿҲ˵��Ӧ�þ�������api�ĵ��ã�)
//    // ���Կ���ʹ��2�ַ�������api�ĵ��ã�
//    // ÿ�δ��м俪ʼ��
//    // �����ǰ�Ǵ���ģ���ǰ�����
//    // �����ǰ����ȷ�ģ���ǰ���ұ�+1
//    int firstBadVersion(int n) {
//        // ׼����������
//        int left = 1, right = n;
//
//        while (left < right) {
//            // ��Ϊ��������ķ��գ����Ե�����д����
//            int mid = left + (right - left) / 2;
//            if (isBadVersion(mid)) {
//                // �����ǰ�����汾��������
//                right = mid;
//            }
//            else {
//                // ����������
//                left = mid + 1;
//            }
//        }
//
//        return left;
//    }
//
//    bool isBadVersion(int version);
//};
//
//int main() {
//	return 0;
//}