//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：分糖果，首先vector中数字需要分出两半，要求其中一半最多可以由多少种不同数字
//    // 思路：首先种类数不会超过数组长度的一步。遍历这个数组，计算有多少种不同的数字。
//    // 判断种类数是否大于数组长度的一半，是的话就返回数组长度的一半，不然就返回种类数
//    int distributeCandies(vector<int>& candyType) {
//        int arr[20001] = {0};
//        int excursion = 10000;
//        // 记录有多少不重复的数
//        int res = 0;
//        for (auto i : candyType) {
//            if (arr[i + excursion] == 0) {
//                res++;
//            }
//            arr[i + excursion] = 1;
//        }
//
//        int maxRes = candyType.size() / 2;
//        return res > maxRes ? maxRes : res;
//    }
//};
//
//int main() {
//	return 0;
//}