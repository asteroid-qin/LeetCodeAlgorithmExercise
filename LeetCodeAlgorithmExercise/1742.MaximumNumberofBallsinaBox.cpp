//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：求盒子中小球的最大数量
//    // 思路：根据题意，需要求出lowLimit的数位和，然后放入map中，value则是数位出现的次数（直接++）
//    // 每次都需要比较value,因为要求的是最大数量。当value大于当前的最大数量时，更新最大数量。
//    // 最后返回这个最大数量即可（复杂度O(n^2)）
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