//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回可以通过分割得到的平衡字符串的 最大数量(尽可能！分割成尽可能多的平衡字符串！) 。
//    // 思路：首先s本身就是一个平衡字符串。要切割的话如果当前是L就count++，不然就count--.只要count==0
//    // 就代表可以从这点开始切割res++
//    // 所以只要遍历这个s，再count++或者--后，求count==0的次数即可
//    int balancedStringSplit(string s) {
//        int res = 0, count = 0;
//
//        for (auto& c : s) {
//            if (c == 'L') {
//                count++;
//            }
//            else {
//                count--;
//            }
//
//            if (count == 0) {
//                res++;
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