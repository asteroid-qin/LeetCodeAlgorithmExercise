//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：删除S中的重复项（有相邻重复的元素就消除并得到新的字符串然后再尝试消除，直到不能消除），类似于消消乐
//    // 思路：可以用栈先进后出的思想来完成这道题（敲好c++中的string就可以当做栈一样玩）
//    string removeDuplicates(string S) {
//        // 遍历即可，对S中每一个字符进行判断
//        // 首先当前拼接的res是否为空，为空往里面放入就完事了
//        // 如果不为空，那么判断最后一个元素是否等于当前元素，如果等于就弹出尾部元素并开始下一轮循环
//        // 如此，遍历结束后，得到的res就是我们想要的结果
//        string res;
//
//        for (char& c : S) {
//            if (res.size() != 0 && res.back() == c) {
//                res.pop_back();
//            }
//            else {
//                res.push_back(c);
//            }
//        }
//        return res;
//    }
//};
//
//int main() {
//    string res = "";
//
//    cout << "你好~~" << endl;
//    // cout << res.back() << endl; 注意！空字符串不能调用back
//
//	return 0;
//}