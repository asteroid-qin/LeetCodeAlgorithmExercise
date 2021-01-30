//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 求出最长公告前缀
//    string longestCommonPrefix(vector<string>& strs) {
//        // 用一个变量记录公共长
//        int commonLength = 0;
//
//        // 直接一个大for循环
//        for (int i = 1; i < strs.size(); i++) {
//            // 让第一个和第n个一直比较
//            setCommonLengthByTwoString(strs.at(0), strs.at(i), commonLength);
//
//            // 加一个if判断进行优化
//            if (commonLength == 0)
//                return "";
//        }
//
//        // 这里需要排除掉strs里面只有一个字符串的情况
//        if (commonLength == 0 && !(strs.size() == 1)) {
//            return "";
//        }
//        else {
//            return strs.at(0);
//        }
//    }
//
//    // 对传入的两个字符串前缀比较并返回公共前缀长度
//    // 因为默认是第一个和第n个比较，所以每次比较成功就把第一个字符串根据公共长度进行截取
//    void setCommonLengthByTwoString(string &s1, string& s2, int & commonLength) {
//        // 记录每次的公共长度
//        int myCommonLength = 0;
//
//        // 判断第一个字符串的长度,如果为0直接退出
//        if (s1.size() == 0) {
//            commonLength = 0;
//            return;
//        }
//
//        // 直接遍历
//        for (int i = 0; i < s1.size() && i < s2.size(); i++) {
//            if (s1.at(i) == s2.at(i)) {
//                myCommonLength++;
//            }
//            else {
//                break;
//            }
//        }
//
//        // 遍历完毕后
//        commonLength = myCommonLength;
//        // 再对第一个字符串进行删除
//        s1.erase(commonLength);
//    }
//};
//
//int main() {
//
//    Solution s;
//
//    string s1 = "flowwer";
//    string s2 = "flowww";
//    int common = 0;
//
//    s.setCommonLengthByTwoString(s1, s2, common);
//
//
//    cout << "执行函数后s1：" << s1 << "->" << endl;
//    cout << "公共长度:" << common << endl;
//	return 0;
//}
