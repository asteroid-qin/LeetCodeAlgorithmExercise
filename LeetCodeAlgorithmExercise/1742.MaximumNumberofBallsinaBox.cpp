//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�������С����������
//    // ˼·���������⣬��Ҫ���lowLimit����λ�ͣ�Ȼ�����map�У�value������λ���ֵĴ�����ֱ��++��
//    // ÿ�ζ���Ҫ�Ƚ�value,��ΪҪ����������������value���ڵ�ǰ���������ʱ���������������
//    // ��󷵻��������������ɣ����Ӷ�O(n^2)��
//    int countBalls(int lowLimit, int highLimit) {
//        int res = 0;
//        unordered_map<int, int> m;
//
//        while (lowLimit <= highLimit) {
//            int num = 0, temp = lowLimit;
//
//            while (temp) {
//                num += temp % 10;
//                temp /= 10;
//            }
//
//            m[num]++;
//
//            if (m[num] > res) {
//                res = m[num];
//            }
//
//            lowLimit++;
//        }
//
//        return res;
//    }
//
//};
//int main() {
//	return 0;
//}