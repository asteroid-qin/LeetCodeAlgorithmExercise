//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：往栈中添加1-n个元素，通过各种操作得到target数组，求各种操作（以字符串数组形式返回）
//    // 思路：从1遍历到n，观察target：
//    // 如果当前target[pos] == i，就放入push,然后pos++(循环条件为：pos < target.size())
//    // 如果不等于，就往里面放入一个push一个pop，进入下轮循环。pos不++
//    vector<string> buildArray(vector<int>& target, int n) {
//        vector<string> res;
//
//        for (int i = 1, pos = 0; pos < target.size(); i++, pos++) {
//            res.push_back("Push");
//
//            if (target[pos] != i) {
//                res.push_back("Pop");
//                pos--;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}