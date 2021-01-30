//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 是上一题的升级版。目标：判断vector中是否有元素重复，并且满足重复的索引值的差小于k
//    // 思路：先找出重复的值并记录他们的索引，然后判断他们索引的差是否是小于k的
//    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//        // 按照题意，很明显这次应该使用map，key放具体数字，value放索引
//        unordered_map<int, int> myMap;
//
//        for (int i = 0; i < nums.size(); i++) {
//            // 首先判断有没有
//            if (myMap.count(nums[i])) {
//                // 如果有，那么需要取出当前值之前在map中放索引
//                // 因为是从小到大遍历，很明显i肯定是大于之前存入的索引，所以这里做个判断即可
//                if (i - myMap[nums[i]] <= k) {
//                    // 如果相减得到的值是在k范围内，那成功！
//                    return true;
//                }
//                // 不然，每次需要更新当前的值
//            }
//            // 把当前存入map中（也可以作为更新）
//            myMap[nums[i]] = i;
//        }
//
//        return false;
//    }
//
//    // 这里也可以使用set来做
//    bool containsNearbyDuplicate2(vector<int>& nums, int k) {
//        // 准备一个set
//        unordered_set<int> mySet;
//
//        for (int i = 0; i < nums.size(); i++) {
//           // 如果包含就代表是
//           if (mySet.count(nums[i])) {
//                return true;
//           }
//           mySet.insert(nums[i]);
//           // 最精华的一步！！
//           // 根据题意，必须满足两个重复数的下标在k内
//           // 所以如果set的小于k，那不论如何都应该返回false
//           if (mySet.size() > k) {
//               // 当set的大小大于k的时候，为了满足myset里面的元素个数始终在k内，需要把前面的移出掉            
//               mySet.erase(nums[i - k]);
//           }
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}