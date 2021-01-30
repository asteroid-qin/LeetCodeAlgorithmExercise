//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    
//    
//    // 目标：输入成绩（成绩不重复），要求返回11对应的名次。其中第一名，第二名，第三名是特殊的字符串。
//    // 以后就是相对名次
//    // 思路：排序！排序！排序！用一个map记录每个数的下标，key是数字的值，value是数字的索引
//    // 再遍历这个排序后的nums。把每个数从map中取出即可
//    vector<string> findRelativeRanks(vector<int>& nums) {
//        // 准备变量接受结果
//        vector<string> res(nums.size());
//        // 用map记录每个数的原始下标
//        unordered_map<int, int> myMap;
//        for (int i = 0; i < nums.size(); i++) {
//            myMap[nums[i]] = i;
//        }
//        // 对nums排序(逆序排列)
//        sort(nums.begin(), nums.end(), cmp1);
//        // 遍历这个排序后的nums（从前往后）
//        for (int i = 0; i < nums.size(); i++) {
//            if (i == 0) {
//                res[myMap[nums[i]]] = "Gold Medal";
//            }
//            else if (i == 1) {
//                res[myMap[nums[i]]] = "Silver Medal";
//            }
//            else if (i == 2) {
//                res[myMap[nums[i]]] = "Bronze Medal";
//            }
//            else {
//                res[myMap[nums[i]]] = to_string(i + 1);
//            }
//        }
//
//        return res;
//    }
//
//    // 用于倒序的方法
//    static int cmp1(int a, int b)
//    {
//        return a > b;
//    }
//
//};
//
//int main() {
//	return 0;
//}