//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：要求把混合了数字和字母的字符串 s变成数字和字母相隔的字符串
//    // 思路：先判断能否格式化，遍历s分割成两个字符串：字母字符串和数字字符串
//    // 判断两个字符串的长度差的绝对值是否小于等于1（并且两个字符串长度都不等于s）
//    // 不满足就直接返回空串，满足就继续字符串拼接。先拼长度大的再拼长度小的
//    // 不过上面这种思路需要创建两条字符串，空间复杂度O(n),所以得想想能不能优化...
//    // 比如，用两个变量记录数字和字符串的数量，只要差的绝对值大于1（包括长度等于s）就直接返回空字符串
//    // 否则就可以格式化。问题是如何在s上处理？具体思路是：
//    // 遍历这个s，如果数字的数量大，那么首字符应该是数字，否则是字母
//    // 如果不符合，就while循环找到想要的字符并交换。遍历完毕后得到结果
//    // 虽然写的不够优雅，但是好歹空间复杂度降低了....
//    string reformat(string s) {
//        int num = 0, letter = 0;
//
//        for (auto& c : s) {
//            if (isalpha(c)) {
//                letter++;
//            }
//            else {
//                num++;
//            }
//        }
//
//        if (abs(num - letter) > 1) {
//            return "";
//        }
//
//        bool flag = num > letter; // 如果flag=true选择数字，否则选字母
//        for (int i = 0; i < s.size(); i++, flag = !flag) {
//            bool isLetter = isalpha(s[i]);
//
//            if (flag) {
//                if (isLetter) {
//                    for (int j = i + 1; j < s.size(); j++) {
//                        if (!isalpha(s[j])) {
//                            swap(s[i], s[j]);
//                            break;
//                        }
//                    }
//                }
//            }
//            else {
//                if (!isLetter) {
//                    for (int j = i + 1; j < s.size(); j++) {
//                        if (isalpha(s[j])) {
//                            swap(s[i], s[j]);
//                            break;
//                        }
//                    }
//                }
//            }
//        }
//
//        return s;
//    }
//};
//
//int main() {
//	return 0;
//}