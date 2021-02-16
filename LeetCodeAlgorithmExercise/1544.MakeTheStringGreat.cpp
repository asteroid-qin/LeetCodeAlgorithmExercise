//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：整理字符串（类似消消乐
//    // 思路：准备一个栈，遍历s：
//    // 首先判断栈不为空？如果不为空的话，继续判断当前字符是大小还是小写
//    // 因为s中只包含大小字母，所以照样判断当前字符-栈顶字符的绝对值是否等于32
//    // 如果等于就pop然后continue
//    // 默认把当前字符放入栈中。s遍历完成后，
//    // 把栈中元素拼接得到字符串，最后反转再返回！
//    // 最后！！因为c++中，string就可以当栈来使用，所以直接用string来完成上述操作！
//	  // 补充：c1^c2 == 32 可以证明c1、c2指向同一个字母，并且其中一个大写，一个小写
//    string makeGood(string s) {
//        string res;
//
//        for (char& c : s) {
//            if (res.size() != 0 && abs(res.back() - c) == 32) {
//                res.pop_back();
//            }
//            else {
//                res.push_back(c);
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}