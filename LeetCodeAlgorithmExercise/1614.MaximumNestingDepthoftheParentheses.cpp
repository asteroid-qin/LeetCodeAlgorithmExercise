//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：求最大深度（其实就是求括号嵌套层数的最大值
//    // 思路：用到栈的思想（不必真的使用栈），遇到"("就++，遇到")"就--，求这个过程中的最大值即可
//    int maxDepth(string s) {
//        int maxDep = 0, dep = 0;
//
//        for (auto& c : s) {
//            if (c == '(') {
//                dep++;
//                maxDep = max(maxDep, dep);
//            }
//            else if (c == ')') {
//                dep--;
//            }
//        }
//
//        return maxDep;
//    }
//};
//
//int main() {
//	return 0;
//}