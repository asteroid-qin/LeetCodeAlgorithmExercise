//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你两个非负整数 low 和 high 。请你返回 low 和 high 之间（包括二者）奇数的数目。
//    // 思路：分类讨论：
//    // 如果low和high都是奇数，如1-11，那么有6个奇数 
//    // 如果都为偶数，如4-10，那么有3个奇数
//    // 如果low为奇数high是偶数，如3-10，那么有4个奇数
//    // 如果low为偶数，high是奇数，如4-11，那么有4个奇数
//    // 综上所述，都为偶数就是差值/2，否则就是差值/2+1
//
//    // 官方用的是前缀...太妙了..
//    int countOdds(int low, int high) {
//        bool f1 = (low % 2 == 0), f2 = (high % 2 == 0);
//
//        int num = (high - low) / 2;
//        if (f1 && f2) {
//            return num;
//        }
//        else{
//            return num + 1;
//        }
//    }
//
//    // 官方解：
//    int countOdds(int low, int high) {
//        return ((high + 1) >> 1) - (low >> 1);
//    }
//
//};
//
//int main() {
//	return 0;
//}