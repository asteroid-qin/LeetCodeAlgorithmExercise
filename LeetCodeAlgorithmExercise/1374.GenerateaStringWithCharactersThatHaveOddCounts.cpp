//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数 n，请你返回一个含 n 个字符的字符串，其中每种字符在该字符串中都恰好出现 奇数次 。
//    // 思路：先判断n是奇数还是偶数
//    // 如果是奇数，直接返回构造(n，'a')即可
//    // 如果是偶数，先拼接n-1个a，再往后面+b
//    // 综上所述，先创建n-1个a的字符串，如果n是奇数就往后面+a，如果是偶数就往后面加b
//    // 这才算是简单题啊！！！
//    string generateTheString(int n) {
//        string res(n - 1, 'a');
//
//        res.push_back((n % 2 == 0) ? 'b' : 'a');
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}