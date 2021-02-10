//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算email中有多少不同的字符串。其中有两个特殊字符：
//    // 一个是@前面的.，需要过滤。一个是@前面的+，需要过滤+到@以内的所有内容。
//    // 思路，准备一个set，按照上面的目标遍历emails，并对每个字符串进行处理然后放在set中，最后返回set的size
//    int numUniqueEmails(vector<string>& emails) {
//        unordered_set<string> set;
//
//        for (auto& s : emails) {
//            // 拼接字符串
//            string str;
//            
//            for (int i = 0; i < s.size(); ) {
//                if (s[i] == '.') {
//                    i++;
//                }
//                else if (s[i] == '+') {
//                    while (s[i] != '@') { // 直接跳到@
//                        i++;
//                    }
//                }
//                else if (s[i] == '@') { // 到@，直接字符串截取
//                    str += s.substr(i, s.size() - i);
//                    break;
//                }
//                else {
//                    str += s[i++];
//                }
//            }
//
//            set.insert(str);
//        }
//
//        return set.size();
//    }
//};
//
//int main() {
//	return 0;
//}