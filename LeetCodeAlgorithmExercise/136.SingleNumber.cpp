//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 除了一个元素外，每个元素都出现两次。找到那一个。
//    // 根据题意，最直接了当就是用map
//    // 官方给了好几种方法，这里采用的是位运算(最简单)
//    int singleNumber(vector<int>& nums) {
//        int a = 0;
//        for (int i : nums) {
//            a ^= i;
//        }
//        return a;
//    }
//};
//
//// 这里没必要测试
//int main() {
//
//	return 0;
//}
