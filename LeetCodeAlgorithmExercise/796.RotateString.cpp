//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断A是否是B的旋转字符串
//    // 思路：旋转字符串也就是意味着第1个可能移到最后，也有可能第1、2位移动到最后...
//    // 也有可能是A前n-1移动到最后（n是A的长度），综上所述：可以直接A+A，这样就可以把每一种可能列出来，
//    // 然后使用KMP算法，看看B能不能匹配即可。这比自己写KMP算法，然后长度取模实现起来更加简单！并且速度并不慢
//    bool rotateString(string A, string B) {
//        // 只需要注意的是：c++中find找不到，默认返回string::npos
//        return A.size() == B.size() && (A + A).find(B) != string::npos;
//    }
//};
//
//int main() {
//	return 0;
//}