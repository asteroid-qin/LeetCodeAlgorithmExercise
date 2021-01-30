//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断一个数是否只包含2、3、5因子
//    // 思路：如果是丑数，那么num可以写成 pow(2,i)*pow(3,j)*pow(5,k)
//    // 也就是说，把num除去2、3、5的因子，如果是丑数，那结果应该是1！
//    bool isUgly(int num) {
//        // 因为0对任何数取余都等于0，所以得提前排除
//        if (num == 0)
//            return false;
//        while (num % 2 == 0)
//            num /= 2;
//        while (num % 3 == 0)
//            num /= 3;
//        while (num % 5 == 0)
//            num /= 5;
//        // 最后只要判断这个因子是否等于1即可
//        return num == 1;
//    }
//};
//
//int main() {
//	return 0;
//}