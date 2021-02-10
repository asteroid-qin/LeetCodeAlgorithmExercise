//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算N的反码并返回
//    // 思路：反码其实就是 二的N的位数次方- 1 - N。例如：5->101 反码：111-101=10
//    // 归根到底只要计算N到底多少位即可。（邪招：转string然后调size方法）
//    int bitwiseComplement(int N) {
//        if (N == 0) {
//            return 1;
//        }
//        int fa = 1; // 位数最大值
//
//        for (int temp = N; temp; temp >>= 1, fa <<= 1);
//
//        return fa - 1 - N;
//    }
//};
//
//int main() {
//	return 0;
//}