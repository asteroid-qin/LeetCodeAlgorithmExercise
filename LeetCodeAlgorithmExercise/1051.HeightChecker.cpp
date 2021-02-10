//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：heights中是每一个人的高度，需要计算至少移动多少个人使得heights中的元素不递减
//    // 思路：可以对heights进行排序，然后记录不匹配的次数，这个次数就是要的结果
//    // 问题是，用什么排序？根据1 <= heights[i] <= 100，很明显，这里使用计数排序会更优
//    // 首先把heights中所有的元素放入这个100大小的数组中，value代表值
//    // 然后再遍历heights，再while循环map数组得到第一个元素（因为这个map由heights得到，所以这里不用担心越界问题）
//    // 以此进行比较，并用一个变量记录比较结果，最后返回这个变量即可
//    int heightChecker(vector<int>& heights) {
//        int m[101] = { 0 }; // 这里用101会很舒服点..
//        for (int& i : heights) {
//            m[i]++;
//        }
//
//        int count = 0, i = 1;
//        for (int& hei : heights) {
//            while (m[i] == 0) {
//                i++;
//            }
//
//            count += (i != hei);
//            m[i]--;
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}