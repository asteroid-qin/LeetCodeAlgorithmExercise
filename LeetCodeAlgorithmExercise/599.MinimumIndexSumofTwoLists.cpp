//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：用最少索引和找到list1和list2中相同的字符串并返回
//    // 思路：使用map。遍历一次把list1转成set，再遍历一次list2，查到就往res中放即可
//    // 因为要求最少索引和，所以需要用一个变量来判断当前索引和是否小于这个变量，是就更新res里面的值
//    // 不是，就放过这个元素
//    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
//        vector<string> res;
//
//        // 记录每一个字符和它的索引
//        unordered_map<string, int> myMap;
//        for (int i = 0; i < list1.size(); i++) {
//            myMap[list1[i]] = i;
//        }
//
//        // 用一个变量记录最小索引和
//        int minIndex = INT_MAX;
//
//        for (int i = 0; i < list2.size(); i++) {
//            if (myMap.count(list2[i])) {
//                // 计算它们的索引和，大于就放过，小于就更新,等于就往里面加
//                if (myMap[list2[i]] + i < minIndex) {
//                    // 清空res，然后把当前数放入
//                    res.clear();
//                    res.push_back(list2[i]);
//                    // 更新minIndex
//                    minIndex = myMap[list2[i]] + i;
//                }
//                else if (myMap[list2[i]] + i == minIndex) {
//                    res.push_back(list2[i]);
//                }
//                
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}