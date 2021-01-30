//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给定一个正整数，输出它的补数。补数是对该数的二进制表示取反。
//    // 思路：从低往高遍历，把当前位&1，结果为1就舍弃，结果为0就把值累加
//    // 还有一种思路：就是求正整数的补数其实就是当前数和最高位^运算，计算出最高位后
//    // 返回 num ^ (2 << bit - 1) 即可
//    int findComplement(int num) {
//        int result = 0;
//
//        int bit = 0;
//        while (num != 0) {
//            if (!(num & 1)) {
//                result += pow(2, bit);
//            }
//            bit++;
//            num >>= 1;
//        }
//
//        return result;
//    }
//	  // 可以再改良成下面的样子	
//    int findComplement(int num) {
//        // 小心溢出,整数最大值时2的31次方-1.这里可以正好可以取到2的31次方。
//        unsigned int temp = 1;
//
//        while (num >= temp) {
//            temp <<= 1;
//        }
//        
//        return (temp - 1) ^ num;
//     }
//};
//
//int main() {
//
//    cout << ~5 << endl;
//
//	return 0;
//}