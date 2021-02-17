//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：能否连接形成数组
//    // 思路：遍历arr，用map记录arr：key是arr里面的元素，value是元素出现的索引
//    // 再遍历一遍pieces，遍历里面的vector。要求当前字符能查到
//    // 并且当前数字的下标（用map中取）-上一个数字的下标（用map中取）==1. 其中一项不满足就返回false
//    // 默认true.
//    // 补充！根据：1 <= arr[i], pieces[i][j] <= 100，map也可以换成数组！！
//    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
//        unordered_map<int, int> umap;
//        for (int i = 0; i < arr.size(); i++) {
//            umap[arr[i]] = i;
//        }
//
//        for (auto v : pieces) {
//            if (!umap.count(v[0])) { // 特殊处理第一个元素
//                return false;
//            }
//            for (int i = 1; i < v.size(); i++) {
//                if (!umap.count(v[i]) || (umap[v[i]] - umap[v[i-1]] != 1) ) {
//                    return false;
//                }
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