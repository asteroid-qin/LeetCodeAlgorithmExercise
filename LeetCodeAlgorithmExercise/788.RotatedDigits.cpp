//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�����1��N�����ĸ���
//    // ˼·����1��N��ֱ�ӱ������㣬�жϵ�ǰ���Ƿ��Ǻ���
//    // ������ʹ�ö�̬�滮��ʱ�临�Ӷȿ��Դ�O(NlogN)���͵�O(logN)������ֻ�Ǽ��⣬Ŀǰֻд���������㹻��
//    int rotatedDigits(int N) {
//        int arr[10] = { 0,0,1,-1,-1,1,1,-1,0,1 };
//        int res = 0;
//        while (N != 0) {
//
//            int i = N, count = 0;
//            while (i) {
//                int carry = i % 10;
//
//                if (arr[carry] == -1) {
//                    goto to;
//                }
//                count += arr[carry];
//
//                i /= 10;
//            }
//
//            if (count > 0) {
//                res++;
//            }
//
//            to:N--;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}