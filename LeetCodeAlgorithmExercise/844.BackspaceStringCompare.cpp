//#include<iostream>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断字符串S是否等于字符串T（有特殊字符#会导致删除前面一个字符）
//    // 思路：使用栈，所有字符都入栈，遇到#就出栈。最后同时遍历两个栈，判断是否相等
//    // 还有一种方法，直接从后往前遍历S和T，记录#的次数，如果当前#的次数不为0并且当前字符不为#，那么就把当前字符设为#
//    // 对两个字符串处理后，直接判断两个字符串是否相等即可。空间复杂度从O(n)优化到为O(1)。
//    bool backspaceCompare(string S, string T) {
//        stack<char> s;
//        stack<char> t;
//
//        for (auto c : S) {
//            if (c == '#') {
//                if (!s.empty()) {
//                    s.pop();
//                }
//                continue;
//            }
//            s.emplace(c);
//        }
//
//        for (auto c : T) {
//            if (c == '#') {
//                if (!t.empty()) {
//                    t.pop();
//                }
//                continue;
//            }
//            t.emplace(c);
//        }
//
//        if (s.size() != t.size()) {
//            return false;
//        }
//
//        while (!s.empty()) {
//            if (s.top() != t.top()) {
//                return false;
//            }
//
//            s.pop();
//            t.pop();
//        }
//
//        return true;
//    }
//
//
//    bool backspaceCompareP(string S, string T) {
//        for (int i = S.size() - 1, count = 0; i >= 0; i--) {
//            if (S[i] == '#') {
//                count++;
//                continue;
//            }
//           
//            if (count != 0) {
//                S[i] = '#';
//                count--;
//            }
//        }
//
//        for (int i = T.size() - 1, count = 0; i >= 0; i--) {
//            if (T[i] == '#') {
//                count++;
//                continue;
//            }
//
//            if (count != 0) {
//                T[i] = '#';
//                count--;
//            }
//        }
//
//        int i = 0, j = 0;
//        while(i < S.size() && j < T.size()) {
//            if(S[i] == '#' || T[j] == '#') {
//                i += (S[i] == '#');
//                j += (T[j] == '#');
//                continue;
//            }
//
//            if (S[i] != T[j]) {
//                return false;
//            }
//        }
//
//        while (i < S.size()) {
//            if (S[i] != '#') {
//                return false;
//            }
//            i++;
//        }
//
//        while (j < T.size()) {
//            if (T[j] != '#') {
//                return false;
//            }
//            j++;
//        }
//
//        return (i == S.size()) && (j == T.size());
//    }
//
//    // 还是可以优化，看了官方解之后..直接消除#的同时判断两个字符串是否相等（究极版！！）
//    bool backspaceCompareP(string S, string T) {
//        // 一个大for循环，直接解决问题！！
//        for (int i = S.size() - 1, j = T.size() - 1, sNum = 0, tNum = 0; i >= 0 || j >= 0; i--, j--) {
//            for (; i >= 0 && (S[i] == '#' || sNum != 0); i--) {
//                sNum += (S[i] == '#') ? 1 : -1;
//            }
//            for (; j >= 0 && (T[j] == '#' || tNum != 0); j--) {
//                tNum += (T[j] == '#') ? 1 : -1;
//            }
//
//            char s = (i >= 0) ? S[i] : '#';
//            char t = (j >= 0) ? T[j] : '#';
//
//            if (s != t) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}