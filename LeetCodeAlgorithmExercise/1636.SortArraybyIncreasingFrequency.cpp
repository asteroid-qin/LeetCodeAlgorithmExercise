//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：根据每个数出现的频率来排序。如果有多个值的频率相同，请你按照数值本身将它们 降序 排序
//    // 思路：根据-100 <= nums[i] <= 100，用201大小的数组来记录每个数频率。调用一下sortAPI根据频率编写规则即可
//    vector<int> frequencySort(vector<int>& nums) {
//        int arr[201] = { 0 };
//        for (int& i : nums) {
//            arr[i + 100]++;
//        }
//
//        sort(nums.begin(), nums.end(), [=](int& i, int& j) {
//            int x = arr[i + 100], y = arr[j + 100];
//            if (x == y) {
//                return i > j;
//            }
//
//            return x < y;
//        });
//
//        return nums;
//    }
//};
//
//int main() {
//	return 0;
//}