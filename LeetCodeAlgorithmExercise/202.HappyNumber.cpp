//#include<iostream>
//#include<set>
//using namespace std;
//
//class Solution {
//public:
//
//    // 思路，输入一个数，需要循环判断它每一位的平方之和是否等于0
//    // 我去！还是早点睡吧,加速！加速！！
//    bool isHappy(int n) {
//        int slowRunner = n;
//        int fastRunner = getNext(n);
//        while (fastRunner != 1 && slowRunner != fastRunner) {
//            slowRunner = getNext(slowRunner);
//            fastRunner = getNext(getNext(fastRunner));
//        }
//        return fastRunner == 1;
//    }
//
//    int getNext(int n){
//        int totalSum = 0;
//        while (n > 0) {
//            int d = n % 10;
//            n = n / 10;
//            totalSum += d * d;
//        }
//        return totalSum;
//    }
//
//};
//
//int main() {
//	return 0;
//}