//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // ����о�������ֻ��Ҫforѭ���������ұȽϾ���
//    // �о�״̬�����ر�ã���ô�򵥵�һ�����Ȼ���������Σ���
//    // ����һ�ַǳ����ķ�������0��ʼ�����������ϴ������������������
//    // ���˸о�����ʹ�ö��ַ������ٶ�λ
//    // ���ַ�����4ms...һ��ʼ����Ϊ��ը��...���0ms����
//    int mySqrt(int x) {
//        // ����ȥ����x����0��1�����
//        if (x == 0 || x == 1)
//            return x;
//
//        int left = 0;
//        int right = x;
//        long mid = 0;
//
//        while (left + 1 <= right) {
//            // ����õ���ֵ
//            mid = (left + right) / 2;
//
//            // �������Ҫ��
//            if ((mid + 1) * (mid + 1) > x && mid * mid <= x)
//                return (int)mid;
//            else if (mid * mid < x)
//                left = mid;
//            else
//                right = mid;
//        }
//    }
//};
//
//// ����������ö��ַ�ֱ����leetcode�Դ��ı������ϸ㶨�ˣ����ԾͲ�������
//int main() {
//
//	return 0;
//}