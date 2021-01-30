//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：求两个数转换成二进制时，位数不相同的个数
//    // 思路：将x与y做异或运算，得到的数的1的个数就是结果
//    // 求1的个数有三种部分：
//    // 1、调用api。2、自己写一个移位方法
//    // 3、布赖恩·克尼根算法。通过x & (x-1) 可以消去最右边的1来快速计算1个数量
//    int hammingDistance(int x, int y) {
//        // 下面是自己写的移位
//        int count = 0;
//        x = x ^ y;
//
//        // 注意条件！x和y都大于0
//        while (x != 0) {
//            count += (x & 1);
//            x >>= 1;
//        }
//
//        return count;
//    }
//
//    // 这个是使用克尼根算法
//    int hammingDistanceP(int x, int y) {
//        x = x ^ y;
//        int count = 0;
//        while (x != 0) {
//            x = x & (x - 1);
//            // while循环的次数就是1的个数
//            count++;
//        }
//
//        return count;
//    }
//    
//};
//
//int main() {
//
//    cout << (1 ^ 1) << endl;
//    cout << (0 ^ 1) << endl;
//    cout << (0 ^ 0) << endl;
//
//	return 0;
//}