//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断words中每一个string的排列顺序是否满足order里面的顺序关系
//    // 思路：先把order里面的排列顺序计算得到一张表，然后遍历words，比较当前字符串与下一个字符串的先后关系
//    // 晕...理解错题意了，还以为是判断字符串里字符的顺序关系，其实是判断字符串在数组中的顺序是否正常。
//    // 认真读题！！认真读题！！认真读题！！认真读题！！
//    bool isAlienSorted(vector<string>& words, string order) {
//        int m[26]; // 记录优先级
//        for (int i = 0; i < 26; i++) {
//            m[order[i] - 'a'] = i;
//        }
//
//        for (int k = 0; k + 1 < words.size(); k++) {
//            string s1 = words[k];
//            string s2 = words[k + 1];
//
//            int i = 0;
//            // 过滤掉前面相同的部分
//            while (i < s1.size() && i < s2.size() && s1[i] == s2[i]) {
//                i++;
//            }
//
//            if (i == s1.size()) {
//                break;
//            }
//            else if (i == s2.size()) {
//                return false;
//            }
//            else if (m[s1[i] - 'a'] > m[s2[i] - 'a']){
//                    return false;
//            }
//        }
//
//        return true;
//    }
//
//};
//
//int main() {
//
//    cout << (1 ^ 1)<< endl;
//	return 0;
//}