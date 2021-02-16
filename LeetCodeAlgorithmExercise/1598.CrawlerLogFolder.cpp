//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    // 目标： 返回主文件夹所需的最小步数 。
//    // 思路：借助栈即可。遍历logs
//    // 如果当前字符是"../",并且栈不为空，就把弹出栈顶元素（相当于来到上一级目录）
//    // 如果当前字符是："./",不做任何处理
//    // 如果当前字符是：其他字符，加入到栈中（不过这里只要大小，所以其实没必要放入真正的日志字符串，随便放一个人数都行）
//    // 再仔细想一步，发现连栈都可以省掉。直接用一个变量step来记录当前的层数。
//    // 遍历logs，是"../"就--（当然这是在step>0才允许的操作）
//    // 是"./"就continue， 其他任意字符就step++.
//    // 最后返回这个step即可
//    int minOperations(vector<string>& logs) {
//        stack<string> st;
//
//        for (auto& s : logs) {
//            if (s == "../") {
//                if (!st.empty()) {
//                    st.pop();
//                }
//            }
//            else if (s != "./") {
//                st.push(s);
//            }
//        }
//
//        return st.size();
//    }
//
//    int minOperations(vector<string>& logs) {
//        int step = 0;
//
//        for (auto& s : logs) {
//            if (s == "./") continue;
//            if (s == "../") {
//                if (step > 0) {
//                    step--;
//                }
//            }
//            else {
//                step++;
//            }
//        }
//
//        return step;
//    }
//};
//
//int main() {
//	return 0;
//}