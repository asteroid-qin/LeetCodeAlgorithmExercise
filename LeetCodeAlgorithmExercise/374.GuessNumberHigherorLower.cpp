//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��һ������ʹ�ö��ַ�,1 <= n <= 231 - 1
//    // ������Ŀ�Ѿ�������˵������ѹ����..
//    int guessNumber(int n) {
//        int left = 1, right = n, mid;
//
//        while (left <= right) {
//            // ��Ҫ����n��ȡֵ���أ����������������
//            mid = left + (right - left) / 2;
//
//            if (guess(mid) == 0) {
//                // ����
//                return mid;
//            }
//            else if (guess(mid) == 1) {
//                // С�ˣ���Ҫ����
//                left = mid + 1;
//            }
//            else {
//                // ���ˣ���Ҫ����
//                right = mid - 1;
//            }
//
//        }
//
//        // ��һ��Ĭ��ֵ
//        return -1;
//    }
//
//    /**
//     * Forward declaration of guess API.
//     * @param  num   your guess
//     * @return 	     -1 if num is lower than the guess number
//     *			      1 if num is higher than the guess number
//     *               otherwise return 0
//     * int guess(int num);
//     */
//
//    int guess(int num);
//};
//
//int main() {
//	return 0;
//}