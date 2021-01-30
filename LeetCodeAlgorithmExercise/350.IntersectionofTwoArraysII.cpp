//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 上一题的升级版：这里可以重复！！
//    // 思路：直接调用api！！
//    // 还有一种，由于这道题需要保留重复，所以不能使用set，得采用方法1：
//    // 对两个vector排序，用双指针遍历，如果两个指针指向的值相同就放在vector中
//    // ，不然就判断大小后，移动值值偏小的指针
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> v;
//
//        sort(nums1.begin(), nums1.end());
//        sort(nums2.begin(), nums2.end());
//    
//        int i = 0, j = 0;
//
//        while (i < nums1.size() && j < nums2.size()) {
//            // 判断当前值
//            if (nums1[i] == nums2[j]) {
//                v.push_back(nums1[i]);
//                // 对了！！别忘记这里需要同时后移
//                i++;
//                j++;
//            }
//            else if (nums1[i] > nums2[j]) {
//                j++;
//            }
//            else {
//                i++;
//            }
//        }
//
//        return v;
//    }
//};
//
//int main() {
//	return 0;
//}