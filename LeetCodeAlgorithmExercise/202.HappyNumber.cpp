//#include<iostream>
//#include<set>
//using namespace std;
//
//class Solution {
//public:
//
//    // ˼·������һ��������Ҫѭ���ж���ÿһλ��ƽ��֮���Ƿ����0
//    // ��ȥ���������˯��,���٣����٣���
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