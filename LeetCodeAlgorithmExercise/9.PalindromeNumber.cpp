//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // �Լ�д��
//    bool isPalindrome(int x) {
//        // ���ж�������Ƿ��Ǹ����������ֱ�ӷ���false
//        if (x <= 0) {
//            return false;
//        }
//
//        // ��xת��string���жϳ���
//        string x_str = to_string(x);
//        int x_size = x_str.size();
//
//        // ֱ��һ��forѭ���������߶����ж�
//        for (int i = 0; i < x_size / 2; i++) {
//            if (x_str.at(i) != x_str.at(x_size - i - 1)) {
//                // �������ȣ�ֱ��return false
//                return false;
//            }
//        }
//
//        // Ĭ�Ϸ�����
//        return true;
//    }
//    
//    // ��
//    bool isPalindromeP(int x){
//        // ��һ��������Ϊ�˿��ٹ���С��0����
//        // �ڶ���������Ϊ�˿��ٹ���210 ������10������������10ȡ�����0Ҳ�㣩
//        if (x < 0 || (x % 10 == 0 && x != 0)) {
//            return false;
//        }
//
//        int revertedNumber = 0;
//        // ���whileѭ����ʹ��revertedNUmber��xȥ��ǰ��һ��-1λ�ķ�ת��
//        // ��xӦ����ԭxȥ������һ��+1��λ����
//        while (x > revertedNumber) {
//            revertedNumber = revertedNumber * 10 + x % 10;
//            x /= 10;
//        }
//        // 1221 0
//        // 1    122
//        // 12   12
//
//
//        // ��һ��������Ϊ�˴���x=0�����
//        // �ڶ��������ǣ���x��λ��������ʱ�����Բ��ó���10���˵��м����
//        // ��x��λ����ż��ʱ�����x�ǻ���������ôx��revertedNumber�������һ������
//        return x == revertedNumber || x == revertedNumber / 10;
//    }
//};
//
//
//int main() {
//
//
//
//	return 0;
//}