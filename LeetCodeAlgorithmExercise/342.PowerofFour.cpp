//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 好家伙，刚写完判断是否是3的幂次方，现在又来一个判断是否是4的幂次方,直接方法4走起
//    bool isPowerOfFour(int n) {
//        // 因为与运算符优先级低于关系运算符，所以必须使用括号！！
//        return (n > 0) && ((n & (n - 1)) == 0) && ((n & 0xaaaaaaaa) == 0);
//    }
//};
//
//
//int main() {
//    long long i = 4;
//
//    while (i < INT_MAX) {
//        i = i * 4;
//        cout << "此时的i:" << i <<  endl;
//    }
//    
//    cout << i / 4 << endl;
//
//
//	return 0;
//}