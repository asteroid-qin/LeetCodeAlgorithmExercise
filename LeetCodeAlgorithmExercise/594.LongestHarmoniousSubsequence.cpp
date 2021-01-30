//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算nums中和谐数组最大的长度
//    // 思路：好吧，第二次理解错题意..老老实实看官方答案了
//    int findLHS(vector<int>& nums) {
//        unordered_map<int, int> myMap;
//        int res = 0;
//
//        for (auto i : nums) {
//            myMap[i]++;
//            if (myMap.count(i + 1)) {
//                res = max(res, myMap[i] + myMap[i + 1]);
//            }
//            if (myMap.count(i - 1)) {
//                res = max(res, myMap[i] + myMap[i - 1]);
//            }
//        }
//
//        return res;
//    }
//       
//    // 官方提供的思路
//    int findLHSPP(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        int res = 0;
//        int pre = 0, minCount = 0, maxCount = 0;
//
//        for (auto i : nums) {
//            if (i == pre) {
//                minCount++;
//            }
//            else if ((abs(i - pre) == 1) && (minCount != 0)) {
//                maxCount++;
//            }
//            else {
//                if ((abs(i - pre) == 2) && (maxCount != 0)) {
//                    pre = i - 1;
//                    minCount = maxCount;
//                    maxCount = 1;
//                }
//                else {
//                    maxCount = 0;
//                    minCount = 1;
//                    pre = i;
//                }
//            }
//
//            res = max(res, (maxCount == 0) ? 0 : (maxCount + minCount));
//        }
//
//        return res;
//    }
//    
//    // 自己按照之前的思路又写了一种，双100%！！！最终升级版
//    int findLHSPP(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        int res = 0;
//
//        int i = 0, j = 0;
//
//        while (j < nums.size()) {
//            while (j < nums.size() && (nums[j] - nums[i] <= 1)) {
//                j++;
//            }
//
//            res = max(res, (nums[j - 1] == nums[i]) ? 0 : (j - i));
//
//            if (j == nums.size()) break;
//            while (i < nums.size() && (nums[j] - nums[i] > 1)) {
//                i++;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//    Solution s;
//
//    vector<int> res = {1,3,2,2,5,2,3,7,2};
//
//	return 0;
//}