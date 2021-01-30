//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：反转字符串中每一个单词
//    // 思路：使用双指针，这个指针指向单词的头，一个指向单词的尾。
//    // 可以通过向右while循环找到头，如果当前字符是空格就一直++，直到遇上非空格
//    // 尾需要先+=头，然后向右while循环，首先不能超过s的长度，其次如果当前字符是字符就++，直到遇上空格
//    // 的尾
//    // 然后开始swap即可。最后更新i和j的长度。如此反复循环
//	  // 好吧，其实这里只需要一个i就足够了
//    string reverseWords(string s) {
//        int i = 0, j = 0;
//
//        while (i < s.size()) {
//            // 找头
//            while (i < s.size() && (s[i] == ' ')) {
//                i++;
//            }
//            // 找尾
//            j = i;
//            while (j < s.size() && (s[j] != ' ')) {
//                j++;
//            }
//
//            // 开始反转(小心j到尾部的情况)
//            int left = i, right = (j == s.size()?j:j - 1);
//            while (left < right) {
//                swap(s[left++], s[right--]);
//            }
//
//            // 更新i的值
//            i = j + 1;
//        }
//
//        return s;
//    }
//};
//
//int main() {
//    Solution s;
//
//    cout << s.reverseWords("Let's take LeetCode contest") << endl;
//    
//    //string str = "Let's take LeetCode contest";
//
//
//    return 0;
//
//
//}