//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：在大小为 2N 的数组 A 中有 N+1 个不同的元素，其中有一个元素重复了 N 次。
//    // 思路：根据题意，很明显重复的元素只有一个。
//    // 那么可以用set记录每一个出现的元素，第二次出现时直接返回这个元素
//    int repeatedNTimes(vector<int>& A) {
//        unordered_set<int> set;
//
//        for (auto& i : A) {
//            if (set.count(i)) {
//                return i;
//            }
//            set.insert(i);
//        }
//
//        return -1;
//    }
//};
//
//int main() {
//	return 0;
//}