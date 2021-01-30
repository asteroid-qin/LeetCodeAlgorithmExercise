//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算写字符串需要的行数，并至少多少行能放下S，以及最后一行使用的宽度是多少个单位。
//    // 答案作为长度为2的整数列表返回。
//    // 思路：直接求宽度和，然后/100算出行号按照题意是不可行的。必须得直接在遍历的过程中计算出行号
//    // 直接一个for循环搞定
//    vector<int> numberOfLines(vector<int>& widths, string s) {
//        int line = 1, wid = 0;
//
//        for (char c : s) {
//            int w = widths[c - 'a'];
//            wid += w;
//            // 注意！长度是不可以拆分的！！大于100必须得从当前w开始往后排
//            if (wid > 100) {
//                line++;
//                wid = w;
//            }
//        }
//
//        return { line, wid };
//    }
//};
//
//int main() {
//	return 0;
//}