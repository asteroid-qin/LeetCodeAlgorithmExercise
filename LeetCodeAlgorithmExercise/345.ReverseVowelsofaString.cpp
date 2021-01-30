//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 上一题的升级，目标：反转字符串中的元音字母(注意，包括大小写)
//    // 思路：先得到所有元音字母的下标，然后一个for循环交换即可
//    // 当然还有一种方法：使用双指针，这样就没必要新建一个数组并少一轮for循环
//    string reverseVowels(string s) {
//        // 准备一个数组，把元音字母的下标放进去
//        vector<int> v;
//
//        for (int i = 0; i < s.size(); i++) {
//            if (isVowels(s[i]))
//                v.push_back(i);
//        }
//
//        int size = v.size();
//        // 再一个for循环交换即可
//        for (int i = 0; i < size / 2; i++) {
//            swap(s[v[i]], s[v[size - i - 1]]);
//        }
//
//        return s;
//    }
//
//    // perfect！
//    string reverseVowelsPlus(string s) {     
//        // 一个for循环搞定
//        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
//            // 判断当前i和j指向的是否是元音字母，如果不是就++，需要一直指到元音字母
//             // 注意可能出现一个字符串全部不是元音字母的特殊情况，所以while条件必须加一个判断！
//            while(i < j && !isVowels(s[i])) {
//                i++;
//            }
//            while (i < j && !isVowels(s[j])) {
//                j--;
//            }
//           
//            // 两个while循环结束，i和j指向的一定是元音字母，所以可以交换
//            swap(s[i], s[j]);
//        }
//
//        return s;
//    }
//
//    bool isVowels(char& c) {
//        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
//            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
//    }
//};
//
//int main() {
//    Solution s;
//    string str =  s.reverseVowelsPlus("hello");
//
//    cout << str << endl;
//	return 0;
//}