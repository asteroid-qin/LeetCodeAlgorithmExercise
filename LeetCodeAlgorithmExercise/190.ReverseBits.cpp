//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 把一个二进制数颠倒..这里选择使用第一个方法：逐位颠倒
//    uint32_t reverseBits(uint32_t n) {
//        // 把n转成2进制数
//        bitset<32> a(n);
//        // 初始化一个容器
//        bitset<32> b(0);
//        // 开始赋值...
//        for (int i = 0; i < 32; i++)
//        {
//            b[i] = a[31 - i];
//        }
//
//        // 最后返回这个赋值好的结果
//        return b.to_ulong();
//    }
//};
//
//int main() {
//
//
//
//	return 0;
//}