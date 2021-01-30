//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把输入的s进行格式化。字符串s被-分组，要求第一组特别至少分1个字符，
//    // 其他分组必须分k个字符，分组之间以-隔开
//    // 思路：首先根据题意字符串里的-可以完全忽略掉，只需要在分组的时候加上即可
//    // 去掉-，问题就变成了：把s按照大小为k进行分组，每组用-隔开，如果不能恰好整除
//    // 那么就把剩余的部分放在第一组
//    // 所以：先算出s除去-的长度，在计算长度对k取余。能整除就代表1可以分满，不能就把剩余的
//    // 首先分给第一组。然后开始循环每K次加一个-。
//    // 循环结束得到结果。注意！！还有一个条件是把大写字母转换成小写字母！！！
//    string licenseKeyFormatting(string S, int K) {
//        // 先去掉-并把小写字母转成大写，得到全新的S
//        string newS;
//        for (auto c : S) {
//            if (c == '-') continue;
//            if (!isdigit(c)) c = toupper(c);
//            newS.push_back(c);
//        }
//        // 如果得到的长度过小就返回
//        if (newS.size() < K) {
//            return newS;
//        }
//        // 判断这个newS能够被K整除
//        int newSSize = newS.size(), remainder = newSSize % K;
//
//        string res;
//        // 把特别的第一组放入result中
//        res = newS.substr(0, !remainder?K:0);
//        // 开始处理后面普通的一组
//        for (int i = res.size(); i < newSSize; i++) {
//            // 如果能够被K整除，需要在前面加上-
//            if ((i - remainder) % K == 0) {
//                res.push_back('-');
//            }
//            res.push_back(newS[i]);
//        }
//        return res;
//    }
//
//    // 或者计算处理S中的字符同时，把值付给K
//    string licenseKeyFormattingP(string S, int K) {
//        // 拿到除去-的长度
//        int sSize = getSSizeWithout_(S);
//        // 先处理特殊情况
//        if (sSize <= K) {
//            // 去掉-，把结果返回
//            string res;
//            for (auto c : S) {
//                if (c != '-') {
//                    // 如果是小写字母还需要转大写
//                    res.push_back(!isdigit(c) ? toupper(c) : c);
//                }
//            }
//            return res;
//        }
//
//        string res;
//        // 得到取余结果
//        int remainder = sSize % K;
//        // 不然就遍历这个S。这里j用来表示res中的有效长度
//        for (int i = 0, j = 0; i < S.size(); i++) {
//            // 跳过破折号
//            if (S[i] == '-') continue;
//
//            // 先处理当前字符
//            const char c = !isdigit(S[i]) ? toupper(S[i]) : S[i];
//
//            // 判断j是否小于remainder，是就需要除不尽需要单独处理
//            if (j < remainder) {   // 这是余数不为0的处理
//                // 把处理后的字符放入res中
//                res.push_back(c);
//                j++;
//                continue;
//            }
//            // 需要处理整除，也就是j==0的情况
//            if (j != 0 && ((j - remainder) % K == 0)) {
//                res.push_back('-');
//            }
//            res.push_back(c);
//            j++;
//        }
//
//        return res;
//    }
//
//    // 得到s中除开-的长度
//    int getSSizeWithout_(string& s) {
//        int size = 0;
//        for (auto c : s) {
//            if (c != '-') {
//                size++;
//            }
//        }
//        return size;
//    }
//};
//
//int main() {
//    Solution s;
//    string  res = s.licenseKeyFormattingP("5F-2e-9-w-fsa-aewf",4);
//
//    cout << res << endl;
//	return 0;
//}