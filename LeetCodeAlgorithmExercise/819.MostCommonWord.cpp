//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：这里先看官方解释（因为比较长）
//    /*  给定一个段落(paragraph) 和一个禁用单词列表(banned)。返回出现次数最多，同时不在禁用列表中的单词。
//        题目保证至少有一个词不在禁用列表中，而且答案唯一。
//        禁用列表中的单词用小写字母表示，不含标点符号。段落中的单词不区分大小写。答案都是小写字母。*/
//    // 简单抽象一下，其实就是把paragraph中的单词都给提取出来，然后得过滤掉banned中存在的单词，然后返回
//    // 出现次数最多的单词。
//    // 思路：把paragraph中的单词提取出来很轻松，过滤直接使用set查询即可。最后单词和出现的次数可以做成map，
//    // 一个变量记录最多次数，一个记录出现最多次的单词。当前次数大于最多次数那就更新最多次数和单词，即可
//    string mostCommonWord(string paragraph, vector<string>& banned) {
//        int i = 0, j = 0, m = paragraph.size();
//        unordered_map<string, int> mp;
//        unordered_set<string> s;
//        int count = 0;
//
//        for (auto str : banned) {
//            s.insert(str);
//        }
//
//        string res;
//
//        while (j < m) {
//            while (j < m && isalpha(paragraph[j])) {
//                paragraph[j] = tolower(paragraph[j]);
//                j++;
//            }
//
//            string now = paragraph.substr(i, j - i);
//
//            if (!s.count(now)) {
//                mp[now]++;
//
//                if (mp[now] > count) {
//                    res = now;
//                    count = mp[now];
//                }
//            }
//
//            while (j < m && !isalpha(paragraph[j])) {
//                j++;
//            }
//
//            i = j;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}