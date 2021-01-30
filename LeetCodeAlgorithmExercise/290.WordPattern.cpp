//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断pattern中每一个字符和s中每个单词是否是映射关系（注意长度都大于1，并且只包含小写字母）
//    // 思路：遍历包含key的pattern，每一个key都要去s中拿到一个单词,在map中比对它们之间可能存在的映射关系
//    // 再去读题，发现是双向映射关系，也就是说：一旦映射成功就不应该改变映射关系！
//    // 第二次踩坑：之前只考虑j到头的情况，没有考虑i先到头的情况，需要补上！
//    bool wordPattern(string pattern, string s) {
//        // 记录p和s的位置
//        int i = 0, j = 0;
//
//        // 这里因为是双向映射，所以得存两种映射关系
//        unordered_map<char, string> uMap;
//        unordered_map<string, char> pMap;
//
//
//
//        while (i < pattern.size()) {
//            // 获取s中单词
//            int size = 0;
//            // 注意这个while条件退出有两种情况，要么是遍历到尾，要么是遇到空格
//            while (j + size < s.size() && s[j + size] != ' ') {
//                size++;
//            }
//
//            // 在判断映射关系之前需要验证得到的单词是否合法(作为key的字符肯定是没问题的！)
//            if (!size) {
//                // 如果大小为0，那就没必要继续比较了
//                return false;
//            }
//
//            // 拿到新得到的字符串
//            string str = s.substr(j, size);
//
//            // 判断s和t中是否存在映射关系。如果存在就取出value把两个单词进行比较，如果没有就把映射关系存进去
//            if (uMap.count(pattern[i]) || pMap.count(str)) {
//                // 开始比较
//                if (uMap[pattern[i]] != str || pMap[str] != pattern[i]) {
//                    return false;
//                }
//            }
//            else {
//                // 不存在就把映射关系存进去
//                uMap[pattern[i]] = str;
//                pMap[str] = pattern[i];
//            }
//
//            // 最后调整i和j的值，j需要在size的基础上加加
//            i++;
//            j += size + 1;
//        }
//
//        // 最后，上面只考虑了j先指到尾部的情况，没有考虑i先指到头的情况！！
//        // 最后加上！！这里只要判断j的值即可
//        return j == s.size() + 1;
//    }
//};
//
//int main() {
//    string s = "asssbade";
//
//    cout << s.substr(3,2) << endl;
//
//	return 0;
//}