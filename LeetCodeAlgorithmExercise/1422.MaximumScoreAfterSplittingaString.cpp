//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��s��Ϊ�����֣��������0�ĸ������ұ�1�ĸ�������͵����ֵ
//    // ˼·���ȱ���һ��s����1�ĸ���one��Ȼ���ٱ���һ��s���������ۣ�
//    // �����ǰΪ0��zero++����res��¼zero+one�����ֵ
//    // �����ǰΪ1��one--����¼���ֵ
//    // ע�⣡��Ҫ��һλ!!����Ϊ�����Ǵ�i��i+1���ָ�������ⲻ�ָܷ����һλ��
//    int maxScore(string s) {
//        int res = 0, zero = 0, one = 0;
//
//        for (char& c : s) {
//            if (c == '1') {
//                one++;
//            }
//        }
//
//        for (int i = 0; i < s.size() - 1; i++) { // Ԥ��һ����
//            if (s[i] == '1') {
//                one--;
//            }
//            else {
//                zero++;
//            }
//
//            res = max(res, one + zero);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}