//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：按照indices进行赋值即可
//    // 思路：最简单的就是新建res赋值，比较复杂的就是原地修改
//    // 这是模拟
//    string restoreString(string s, vector<int>& indices) {
//        string res(s.size(),' ');
//
//        for (int i = 0; i < s.size(); i++) {
//            res[indices[i]] = s[i];
//        }
//
//        return res;
//    }
//
//    // 这是原地修改(脑壳有点痛...)
//    string restoreStringP(string s, vector<int>& indices) {
//        for (int i = 0; i < s.size(); i++) {
//            if (indices[i] != i) { // 为了防止形成回路，需要修改indices的值
//                int index = indices[i]; // 要修改的下标
//                char c = s[i]; // 要修改的字符
//
//                while (index != i) {
//                    swap(c, s[index]);
//                    swap(index, indices[index]);
//                }
//
//                s[i] = c;
//                indices[i] = i;
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