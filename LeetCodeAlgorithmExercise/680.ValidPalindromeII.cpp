//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断一个s是否最多删除一个字符就可以变成回文串
//    // 思路：涉及到回文就应该考虑双指针。一个从头开始，一个从尾开始扫描，如果指向的字符相等就各自++、--、
//    // 如果不相等，那么要么移除左边，要么移除右边，干脆两个都试试，结果或运算
//    // 。第二次直接return false，默认return ture
//    bool validPalindrome(string s) {
//        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
//            if (s[i] == s[j]) continue;
//
//            return judge(s, i + 1, j) || judge(s, i, j - 1);
//        }
//        // a b e g e b a c
//        // a c b e g e b c
//        // a e b e g e b f
//        return true;
//    }
//
//    bool judge(string& s, int left, int right) {
//        for (int i = left, j = right; i < j; i++, j--) {
//            if (s[i] != s[j]) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//
//  
//    // 根据回文的性质进行优化。。但是效果好像并不理想
//    // 一个简单回文串，如【a、b、b、a】，加上一个e变成【a、b、b、a、e】或者【e、a、b、b、a】
//    // 设i指向头，j指向尾，会发现：
//    // 如果i+1指向的值等于j指向的值，那么i指向的值可以舍弃。
//    // 如果j-1指向的值等于i指向的值，那么j指向的值可以舍弃。
//    // 到这里似乎万事大吉，但是还存一种特殊情况：那就是【a、c、a、c】、【a、c、a、b、a、c】。如果上面两个条件同时
//    // 成立那舍弃i还是j，必须得看i+2和j-2指向的情况。
//    // 幸运的是，这种特殊情况最多考虑一次，三个不同的字符无法作为回文串的头尾。
//    // 下面是代码实现。虽然这种情况只需要遍历一次s，不会造成重复扫描。但是由于分支判断太多，所以速度感人...
//    bool validPalindromeP(string s) { 
//        // 用count记录出现的次数
//        bool count = false;
//        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
//            if (s[i] == s[j]) continue;
//
//            if (count) {
//                return false;
//            }
//
//            if ( (j - i > 3) && (s[i + 1] == s[j]) && (s[j - 1] == s[i]) ) {
//                if (s[i + 2] == s[j - 1]) {
//                    i++;
//                }
//                else if (s[j - 2] == s[i + 1]) {
//                    j--;
//                }
//                else {
//                    return false;
//                }
//            }else if (s[i + 1] == s[j] ) {
//                i++;
//            }
//            else if (s[j - 1] == s[i]) {
//                j--;
//            }
//            else {
//                return false;
//            }
//
//            count = true;
//        }
//        
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}