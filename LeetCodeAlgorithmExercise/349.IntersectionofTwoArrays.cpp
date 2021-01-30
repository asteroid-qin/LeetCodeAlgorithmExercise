//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：求两个数组的交集
//    // 思路：方法1：可以先把两个数组排序，使用双指针从头往后遍历这两个数组，
//    // 如果值相等就放入新建的容器中，不相等就根据情况选择性的把指针++
//    // 方法2：说到求交集，就应该想到集合。可以把两个数组转成集合，再求集合的交集，最后把交集放入vector中并返回
//    // 很明显，方法2更加优秀！
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        // 存放结果
//        vector<int> v;
//
//        // 先转成集合
//        unordered_set<int> set1(nums1.begin(),nums1.end());
//        unordered_set<int> set2(nums2.begin(), nums2.end());
//        // 求两个集合的交集（这里直接调用api即可，当然也可以自己写一个
//        // ，无非是遍历其中一个集合，用set值在另一个集合中查，查到了就存入）
//        // 算了，这个算法真的恶心
//        // 最后优化一下，选用数量小的遍历,算了不优化了..排名居然还靠后了
//        for (auto key1 : set1) {
//            if (set2.count(key1)) {
//                v.push_back(key1);
//            }
//        }
//
//       
//        return v;
//    }
//};
//
//int main() {
//	return 0;
//}