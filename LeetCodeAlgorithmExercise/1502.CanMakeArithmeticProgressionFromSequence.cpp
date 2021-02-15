//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断能否形成等差数列
//    // 思路：对arr进行排序，根据2 <= arr.length <= 1000计算，前两项的公差
//    // 从第三个元素开始遍历，只要当前元素-上一个元素不等于公差就false，默认true
//    bool canMakeArithmeticProgression(vector<int>& arr) {
//        sort(arr.begin(), arr.end());
//        int d = arr[1] - arr[0];
//        for (int i = 2; i < arr.size(); i++) {
//            if (arr[i] - arr[i - 1] != d) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}