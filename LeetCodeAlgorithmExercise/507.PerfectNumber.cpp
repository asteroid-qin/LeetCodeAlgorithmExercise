//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���һ�������ܷ���ڳ��Լ����������֮��
//    // ˼·����һ�������������ӣ����ھͷ���false���ɡ�����жϽ���Ƿ����num
//    // ֱ��ʹ��ö����.��������ŷ�����-ŷ�����������..ֱ��������԰������
//    bool checkPerfectNumber(int num) {
//        // ��Ҫ�����������1
//        if (num == 1) {
//            return false;
//        }
//        // ע������˵�����Լ���������Ӻ͡�����num�Ǵ��ڵ���1��
//        int sum = -num;
//
//        // forѭ�����õ�num������
//        for (int i = 1; i <= sqrt(num); i++) {
//            if (num % i != 0) continue;
//            // �����Ӽ��뵽sum��
//            sum += i + num / i;
//            // �ж�sum��ֵ
//            if (sum > num) {
//                return false;
//            }
//        }
//
//        // ����ж�sum�Ƿ����num
//        return sum == num;
//    }
//};
//
//int main() {
//	return 0;
//}