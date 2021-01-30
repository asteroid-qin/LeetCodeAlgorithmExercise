//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：不使用库函数、不把字符串转成整数，要求把两个非负整数字符串相加
//    // 思路：双指针+进位做判断即可（直接一个大while循环搞定）
//    string addStrings(string num1, string num2) {
//        // 初始化返回结果
//        string s;
//
//        // 相加肯定是从低位往高位加
//        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
//
//        while (i >= 0 || j >= 0 || carry == 1) {
//            int x = i >= 0 ? num1[i] - '0' : 0;
//            int y = j >= 0 ? num2[j] - '0' : 0;
//            int result = x + y + carry;
//            s.push_back('0' + result % 10);
//            carry = result / 10;
//            i--;
//            j--;
//        }
//
//        reverse(s.begin(), s.end());
//        
//        // 返回结果
//        return s;
//    }
//};
//
//int main() {
//	return 0;
//}