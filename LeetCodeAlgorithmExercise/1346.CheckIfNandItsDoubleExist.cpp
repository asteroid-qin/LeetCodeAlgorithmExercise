//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数数组 arr，请你检查是否存在两个整数 N 和 M，满足 N 是 M 的两倍（即，N = 2 * M）。
//    // 思路：使用set，把每一个遍历后的数放入
//    // 遍历arr，尝试当前数*2然后再set找
//    // ，找到就直接返回true。默认false
//    // *2没有找到，先判断当前数是否被2整除，可以的话就尝试用当前数/2找，找到就返回true
//    bool checkIfExist(vector<int>& arr) {
//        unordered_set<int> uset;
//
//        for (auto& i : arr) {
//            if (uset.count(i * 2) || ((i % 2 == 0) && uset.count(i / 2)) ) {
//                return true;
//            }
//
//            uset.insert(i);
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}