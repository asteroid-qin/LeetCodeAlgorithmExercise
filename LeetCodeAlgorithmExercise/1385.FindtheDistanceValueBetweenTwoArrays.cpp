//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你两个整数数组 arr1 ， arr2 和一个整数 d ，请你返回两个数组之间的 距离值 （直接看官方描述）
//    // 其实就是计算有多少个元素满足|arr1[i]-arr2[j]| <= d 。
//    // 思路: 想太多了..直接遍历就完事了(要么暴力，要么二分)
//    // 二分真是写的脑壳痛...熟练调用api会舒服很多
//    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//        sort(arr2.begin(), arr2.end());
//        int count = 0;
//
//        for (auto& x : arr1) {
//            unsigned p = lower_bound(arr2.begin(), arr2.end(), x) - arr2.begin();
//            bool flag = true;
//            if (p < arr2.size()) { // 小心arr2中所有元素都比x要小，从而导致p越界
//                flag &= (arr2[p] - x > d);
//            }
//            if (p - 1 >= 0 && p - 1 < arr2.size()) { // unsigned-1可也能越界！！
//                flag &= (x - arr2[p - 1] > d);
//            }
//            count += flag;
//        }
//
//        return count;
//    }
//
//};
//int main() {
//	return 0;
//}