//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 自己写的
//    bool isPalindrome(int x) {
//        // 先判断这个数是否是负数，如果是直接返回false
//        if (x <= 0) {
//            return false;
//        }
//
//        // 将x转成string，判断长度
//        string x_str = to_string(x);
//        int x_size = x_str.size();
//
//        // 直接一个for循环左右两边对折判断
//        for (int i = 0; i < x_size / 2; i++) {
//            if (x_str.at(i) != x_str.at(x_size - i - 1)) {
//                // 如果不相等，直接return false
//                return false;
//            }
//        }
//
//        // 默认返回真
//        return true;
//    }
//    
//    // 答案
//    bool isPalindromeP(int x){
//        // 第一个条件是为了快速过滤小于0的数
//        // 第二个条件是为了快速过滤210 这样被10整除的数（被10取余等于0也算）
//        if (x < 0 || (x % 10 == 0 && x != 0)) {
//            return false;
//        }
//
//        int revertedNumber = 0;
//        // 这个while循环会使得revertedNUmber是x去掉前面一半-1位的反转数
//        // 而x应该是原x去掉后面一半+1的位的数
//        while (x > revertedNumber) {
//            revertedNumber = revertedNumber * 10 + x % 10;
//            x /= 10;
//        }
//        // 1221 0
//        // 1    122
//        // 12   12
//
//
//        // 第一个条件是为了处理x=0的情况
//        // 第二个条件是，当x的位数是奇数时，可以采用除以10过滤掉中间的数
//        // 当x的位数是偶数时，如果x是回文数，那么x和revertedNumber，满足第一个条件
//        return x == revertedNumber || x == revertedNumber / 10;
//    }
//};
//
//
//int main() {
//
//
//
//	return 0;
//}